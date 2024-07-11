def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "2")
    return n - int(s.split(" ")[0].split(" ")[-1]) - 3