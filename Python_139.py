def special_factorial(n):
    result = 1
    for i in range(n, 0, -1):
        result *= i
    return result