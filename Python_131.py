def digits(n):
    product = n
    while n > 9:
        digit = n % 10
        if digit != 0:
            product *= digit
        n //= 10
    return product