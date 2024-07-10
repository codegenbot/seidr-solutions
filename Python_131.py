```
def max_product_of_digits(n):
    n = str(n)
    max_product = 1
    for digit in sorted(n, reverse=True):
        if digit != '0':
            max_product *= int(digit)
    return str(max_product) or '0'