def special_factorial(n):
    result = 1
    for i in range(n, 0, -1):
        temp = 1
        for j in range(i, 0, -1):
            temp *= j
        result *= temp
    return result