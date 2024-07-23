def digits(n):
    product = 0
    for digit in str(n):
        if int(digit) % 2 != 0:
            product = int(digit)
            break
    return product