def digits(n):
    product = 0
    while n:
        digit = n % 10
        if digit % 2 == 0:
            return True
        product += digit
        n //= 10
    return False