def digits(n):
    product = 1
    while n > 0:
        digit = n % 10
        product = product * digit
        n //= 10
    return product if product != 0 else 1