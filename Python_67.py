def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "1")
    return n - int(s.split()[2]) - int(s.split()[4])