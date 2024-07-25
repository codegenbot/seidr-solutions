def fruit_distribution(s, n):
    fruits = s.split()
    apples = int(fruits[0])
    oranges = int(fruits[4])
    return n - apples - oranges