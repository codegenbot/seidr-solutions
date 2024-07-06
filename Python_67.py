
def fruit_distribution(s, n):
    apples, oranges = [int(x) for x in s.split(" ")]
    return n - apples - oranges