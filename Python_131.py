def digits(n):
    if n < 10: 
        return 0
    product = 1
    while n:
        product *= n % 10
        n //= 10
    return product