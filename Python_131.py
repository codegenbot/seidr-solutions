def digits(n):
    product = 1
    while n > 0 and n % 2 == 1:
        if n % 10 != 0:
            product *= n % 10
        n //= 10
    return product