def fruit_distribution(s, n):
    s = s.replace("apples and", " app").replace("oranges and", " or")
    s = s.split()
    return n - int(s.count("1") + s.count("2"))