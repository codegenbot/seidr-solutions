def digits(n):
    product = 1
    for digit in str(n):
        if int(digit) % 2 != 0:
            product = product * int(digit) if int(digit) % 2 != 0 else product
    return product