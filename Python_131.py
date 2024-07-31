def digits(n):
    product = n if n % 10 % 2 else 1
    while n:
        digit = n % 10
        if digit % 2:
            product *= digit
        n //= 10
    return product