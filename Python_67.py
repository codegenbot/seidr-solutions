def fruit_distribution(s, n):
    apples, oranges = map(int, s.split()[:2])
    return n - apples - oranges