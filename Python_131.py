def digits(n):
    product = 1
    has_odd_digit = False
    while n:
        digit = n % 10
        if digit % 2:
            product *= digit
            has_odd_digit = True
        n //= 10
    return 0 if not has_odd_digit else product