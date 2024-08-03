def fruit_distribution(s, n):
    apples, oranges = map(int, [x.split()[0] for x in s.split() if x.isdigit()])
    return n - apples - oranges