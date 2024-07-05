def digits(n):
    product = 1
    has_odd = False
    for digit in str(n):
        if int(digit) % 2 != 0:
            product *= int(digit)
            has_odd = True
    return product if has_odd else 0