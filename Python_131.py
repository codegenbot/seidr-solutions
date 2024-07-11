def digits(n):
    product = 1
    while n:
        digit = n % 10
        if digit % 2 == 0:
            product *= 1
        else:
            product *= 10
        n //= 10
    return product