```
def max_product_of_digits(n):
    n = str(n)
    return int(''.join(sorted(n, reverse=True)).lstrip('0') or '0')