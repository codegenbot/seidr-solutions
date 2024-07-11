def digits(n):
    product = 1
    while n:
        product *= n % 10
        n //= 10
    return product