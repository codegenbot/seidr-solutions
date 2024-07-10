def digits(n):
    has_odd = False
    product = 1
    for digit in str(n):
        if int(digit) % 2 != 0:
            has_odd = True
            product *= int(digit)
    return 0 if not has_odd else product