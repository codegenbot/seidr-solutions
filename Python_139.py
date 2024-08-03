def special_factorial(n):
    if n < 1:
        return 0
    else:
        result = 1
        for i in range(1, n+1):
            result *= math.factorial(i)
        return result