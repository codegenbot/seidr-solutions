def max_product_of_digits(n):
    n = str(n)
    product = 1
    for digit in sorted(n, reverse=True):
        if digit != '0':
            product *= int(digit)
    return str(product)