def fruit_distribution(s, n):
    s = s.replace("apples", "").replace("oranges", "").replace("and", "").replace(" ", "")
    return n - int(s)