def digits(n):
    odd_product = 1
    for digit in str(n):
        if int(digit) % 2 != 0:
            odd_product *= int(digit)
    return odd_product