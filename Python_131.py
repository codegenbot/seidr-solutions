def digits(n):
    product = 1
    has_odd_digit = False
    for digit in str(n):
        if int(digit) % 2 != 0:
            has_odd_digit = True
            product *= int(digit)
    return product if has_odd_digit else 0