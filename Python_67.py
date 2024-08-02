def fruit_distribution(s, n):
    s = s.replace("apples", "a").replace("oranges", "o")
    a, o = map(int, [i for i in s.split() if i.isdigit()])
    return n - a - o