def special_factorial(n):
    result = 1
    for i in range(1, n + 1):
        temp = 1
        for j in range(1, i + 1):
            temp *= j
        result *= temp
    return result