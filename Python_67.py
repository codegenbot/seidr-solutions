def fruit_distribution(s, n):
    apples = int(s.split(' ')[0])
    oranges = int(s.split(' ')[3])
    mango = n - apples - oranges
    return mango