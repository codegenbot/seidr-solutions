def digits(n):
    product = 1
    while n:
        if n % 10 % 2:
            product *= n % 10
        n //= 10
    return product