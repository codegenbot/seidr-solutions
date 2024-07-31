def digits(n):
    product = 1
    while n:
        n, digit = divmod(n, 10)
        if digit % 2 != 0:
            product *= digit
    return product