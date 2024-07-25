```
def digits(n):
    product = 1
    for digit in str(n):
        product *= int(digit)
    return product