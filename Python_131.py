def digits(n):
    product = 1
    has_zero = False
    for digit in str(n):
        if int(digit) == 0:
            has_zero = True
        else:
            product *= int(digit)
    return 0 if has_zero else product