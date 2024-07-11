def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    return n - int(next(i for i in s.split() if i.isdigit()))