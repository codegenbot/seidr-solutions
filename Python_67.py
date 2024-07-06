def fruit_distribution(s, n):
    apples, oranges = map(int, s.split(" "))
    return n - apples - oranges