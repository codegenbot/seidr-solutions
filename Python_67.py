def fruit_distribution(s, n):
    apples, oranges = map(int, s.split("apples and"))
    return n - apples - oranges