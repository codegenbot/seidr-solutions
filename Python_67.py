def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    s = s.replace("oranges", "")
    return (
        n
        - int(s.split()[0].replace("apples ", ",").split(",")[0])
        - int(s.split()[1].replace("oranges ", ",").split(",")[0])
    )