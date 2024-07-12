def fruit_distribution(s, n):
    s = s.replace("apples", "a").replace("oranges", "o")
    s = s.replace("and", "").replace(",", "")
    a, o = map(int, s.split())
    return n - a - o