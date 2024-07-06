def fruit_distribution(s, n):
    apples, oranges = map(int, s.split("apples and ")[0].split())
    return n - apples - oranges