def digits(n):
    product = 1
    for digit in str(n):
        product = 1 if len(str(n)) % 2 == 0 else int(digit)
    return product