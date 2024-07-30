def fruit_distribution(s, n):
    fruits = s.split()
    apples = int(fruits[0])
    oranges = int(fruits[3])
    mango = n - apples - oranges
    return mango