def digits(n):
    product = 1
    while n > 0:
        remainder = n % 10
        if remainder % 2 != 0:
            product *= remainder
        n //= 10
    return product