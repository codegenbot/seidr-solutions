```
def digits(n):
    product = n if sum(digit % 2 != 0 for digit in (n % 10,) + (n // 10,) * ((n //= 10) - 1)) else 1
    while n:
        digit = n % 10
        if digit % 2 != 0:
            product *= digit
        n //= 10
    return product