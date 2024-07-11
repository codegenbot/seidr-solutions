def fruit_distribution(s, n):
    s = s.replace(" apples and ", " ").replace(" oranges", "")
    n = int(n)
    return (
        n
        - int(s.split()[0].replace(" apples", ""))
        - int(s.split()[-1].replace(" oranges", ""))
    )