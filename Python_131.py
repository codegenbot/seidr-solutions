def digits(n):
    product = 1
    count = 0
    while n:
        n, remainder = divmod(n, 10)
        if remainder % 2 != 0:
            product *= remainder
        count += 1
    return product if count > 0 else -1