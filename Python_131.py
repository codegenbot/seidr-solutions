def digits(n):
    odd_product = 1
    while n > 0:
        digit = n % 10
        if digit % 2 != 0:
            odd_product *= digit
        n //= 10
    return odd_product