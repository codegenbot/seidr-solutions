def digits(n):
    product = 1
    while n > 9:
        digit = n % 10
        if digit != 0:
            product *= digit
        elif product == 1: 
            product = 1  # or whatever value makes sense in your context.
        n //= 10
    return product