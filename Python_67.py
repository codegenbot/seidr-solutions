def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    elements = s.split()
    return n - int(next((int(x) for x in elements if x.isdigit()), 0)) - 1