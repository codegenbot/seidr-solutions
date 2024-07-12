def digits(n):
    product = 0
    while n:
        digit = n % 10
        product += digit
        n //= 10
    return product