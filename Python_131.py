```
def digits(n):
    product = 1
    for digit in str(n):
        if int(digit) % 2 == 1:
            product *= int(digit)
    return product