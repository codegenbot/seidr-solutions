def fruit_distribution(s, n):
    apples, oranges = map(int, s.split(" and "))
    return n - apples - oranges