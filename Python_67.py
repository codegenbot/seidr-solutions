
def fruit_distribution(n):
    apples = n // 100
    oranges = n % 100
    mangoes = n - (apples + oranges)
    return mangoes