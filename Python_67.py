def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    s = s.replace(" apples and ", " ")
    s = s.replace(" oranges", "")
    s = s.replace(" apple and ", " ")
    s = s.replace(" orange", "")
    return (
        n
        - int("".join(c for c in s if c.isdigit()))
        - int(s.split()[-1].replace("s", "").split()[0])
    )