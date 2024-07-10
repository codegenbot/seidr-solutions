def digits(n):
    max_product = n
    while n:
        digit = n % 10
        if digit != 0 and digit % 2 == 0: 
            max_product = min(max_product, digit)
        n //= 10
    return max_product * (1 if max_product > 1 else 0) or n