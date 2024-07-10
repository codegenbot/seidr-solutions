def digits(n):
    product = 1
    has_odd = False
    for digit in str(n):
        if int(digit) % 2 != 0:
            has_odd = True
            product *= int(digit)
    return n if not has_odd else product