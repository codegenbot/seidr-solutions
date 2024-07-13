def digits(n):
    product = 1
    while n:
        n, remainder = divmod(n, 10)
        if remainder % 2:
            product *= remainder
    return product