def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    n -= int(s.split()[2].split(" ")[0])
    return n