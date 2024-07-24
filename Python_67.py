def fruit_distribution(s, n):
    s = s.replace("apples and", " ").replace("oranges", " ")
    n -= int(s.split()[0].split(" ")[0]) + 1
    return n