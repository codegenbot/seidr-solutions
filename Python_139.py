import math


def special_factorial(n):
    result = 1
    for i in range(1, n + 1):
        result *= math.factorial(i)
    return result