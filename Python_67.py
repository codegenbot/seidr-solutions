def fruit_distribution(s, n):
    s = s.replace("apples ", "").replace("oranges ", "")
    s = int(s.split()[0])
    return n - s