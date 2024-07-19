def digits(n):
    product = 1
    found_odd_digit = False
    for digit in str(n):
        if int(digit) % 2 != 0:
            product *= int(digit)
            found_odd_digit = True
    return product if found_odd_digit else 0