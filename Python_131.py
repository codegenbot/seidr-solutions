def digits(n):
    product = 1
    while n:
        n, remainder = divmod(n, 10)
        if remainder % 2 != 0:
            product *= remainder
    return product