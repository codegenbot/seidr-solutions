def digits(n):
    odd_product = 1
    while n > 0:
        digit = n % 10
        if digit % 2 == 1:
            odd_product *= digit
        n //= 10
    return odd_product if odd_product > 1 else 0