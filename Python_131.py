```Python
def digits(n):
    product = 1
    for digit in str(n):
        if int(digit) % 2 != 0:
            product = 1 if int(digit) % 2 != 0 else 0
    return product