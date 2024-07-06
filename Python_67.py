def fruit_distribution(s, n):
    s = s.replace("apples and ", "").replace("oranges and ", "")
    n = int(n)
    return (
        n
        - int(
            s.split()[0].replace("apples ", ",").replace("oranges ", ",").split(",")[0]
        )
        - int(s.split()[2].replace("oranges ", ",").split(",")[1])
    )