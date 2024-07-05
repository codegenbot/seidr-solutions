
def fruit_distribution(s, n):
    apples, oranges = map(lambda x: int(x), s.split())
    return n - apples - oranges