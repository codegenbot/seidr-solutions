```
def digits(n):
    product = 1
    for digit in str(n):
        if int(digit) % 2 != 0:
            product *= int(digit) if int(digit) % 2 != 0 else 1
    return product