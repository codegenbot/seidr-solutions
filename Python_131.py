```
def digits(n):
    product = 1
    has_non_zero_digit = False
    for digit in str(n):
        if int(digit) % 2 != 0:
            product *= int(digit)
            has_non_zero_digit = True
    return 0 if not has_non_zero_digit else product