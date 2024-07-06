def digits(n):
    product = 1
    for digit in str(n):
        product *= int(digit) if int(digit) % 2 != 0 else 1
    return product