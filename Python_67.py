def fruit_distribution(s, n):
    s = s.lower()
    s = s.replace("apples and ", "")
    s = s.replace("oranges and ", "")
    n = int(n)
    return (
        n
        - int(s.split()[0].replace("apples ", ""))
        - int(s.split()[1].replace("oranges ", ""))
    )