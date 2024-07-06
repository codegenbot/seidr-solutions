def fruit_distribution(s, n):
    apples, oranges = s.split(" and ")
    apples = int(apples)
    oranges = int(oranges)
    mangoes = n - apples - oranges
    return mangoes