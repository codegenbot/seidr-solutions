def special_factorial(n):
    if n < 1:
        return 0
    elif n == 1:
        return 1
    else:
        result = 1
        for i in range(2, n + 1):
            result *= math.factorial(i)
        return result