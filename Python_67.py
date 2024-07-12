def fruit_distribution(s, n):
    s = s.replace("apples", "a").replace("oranges", "o")
    a = int(s.split()[2].split(" ")[0])
    return n - a