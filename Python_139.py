def special_factorial(n):
    if n <= 0:
        raise ValueError("n must be greater than zero")
    result = 1
    for i in range(n, 0, -1):
        result *= math.factorial(i)
    return result