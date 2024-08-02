```
def digits(n):
    product = 1
    for digit in str(n).lstrip('0'):
        if digit != '0':
            product *= int(digit)
    return product