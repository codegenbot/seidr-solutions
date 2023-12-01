def digits(n):
    result = 1
    while n > 0:
        digit = n % 10
        if digit % 2 != 0:
            result *= digit
        n //= 10
    if result == 1:
        return 0
    return result