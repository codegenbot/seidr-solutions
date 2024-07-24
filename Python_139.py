def special_factorial(n):
    if n == 1:
        return 1
    else:
        result = 1
        for i in range(2, n + 1):
            result *= i * special_factorial(i - 1)
        return result