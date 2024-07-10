def special_factorial(n):
    if n == 0:
        return 1
    else:
        result = 1
        for i in range(1, n+1):
            result *= math.factorial(i)
        return result