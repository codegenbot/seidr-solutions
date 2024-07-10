def special_factorial(n):
    if n < 1:
        return 0
    result = 1
    for i in range(n, 0, -1):
        result *= math.factorial(i)
    return result