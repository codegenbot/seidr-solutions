def fruit_distribution(s, n):
    s = s.replace("apples and ", "").replace("oranges ", ",")
    n = int(n)
    return n - int(s.split(", ")[0].split(" ")[0]) - int(s.split(", ")[1].split(" ")[0])