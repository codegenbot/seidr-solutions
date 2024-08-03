def digits(n):
    product = 1
    count = 0
    for digit in str(n):
        if int(digit) % 2 != 0:
            product *= int(digit)
            count += 1
    return product if count > 0 else 0