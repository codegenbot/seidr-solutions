def digits(n):
    product = 1
    has_odd_digit = False
    while n:
        digit = n % 10
        if digit % 2 != 0:
            product *= digit
            has_odd_digit = True
        n //= 10
    return product if has_odd_digit else 0