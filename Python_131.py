def digits(n):
    product = 1
    has_odd = False
    while n > 0:
        digit = n % 10
        if digit % 2 != 0:
            product *= digit
            has_odd = True
        n //= 10
    return product if has_odd else 0