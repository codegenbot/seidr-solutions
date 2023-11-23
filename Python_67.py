def fruit_distribution(s, n):
    apples, oranges = map(int, s.split()[0::2])
    return n - apples - oranges