def fruit_distribution(s, n):
    apples = int(s.split()[0])
    oranges = int(s.split()[-2])
    return n - apples - oranges