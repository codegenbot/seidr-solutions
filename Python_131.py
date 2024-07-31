def digits(n):
    product = 1
    max_product = 1
    while n:
        digit = n % 10
        if digit % 2:
            product *= digit
        else:
            max_product *= digit
        n //= 10
    return product if product > max_product else max_product