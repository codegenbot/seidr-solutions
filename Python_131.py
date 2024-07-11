def digits(n):
    product = 1
    while n > 0:
        digit = n % 10
        product *= digit
        n //= 10
    if n == 0: 
        return 1
    else:
        return product if product != 0 else 1