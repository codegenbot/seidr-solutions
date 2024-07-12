def digits(n):
    product = 1
    while n:
        digit = n % 10
        if digit % 2 != 0 and digit > 1:
            product *= digit
        n //= 10
    return product