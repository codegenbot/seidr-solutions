def digits(n):
    product = 1
    while n:
        digit = n % 10
        if digit % 2:
            product *= digit
        else:
            product = 0
        n //= 10
    return product