def max_product_of_digits(n):
    n = str(n)
    digits = list(n) 
    product = 1
    for digit in sorted(digits, reverse=True):
        if digit != '0':
            product *= int(digit)
    return '0' if product == 1 else str(product)