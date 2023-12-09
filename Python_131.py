def digits(n):
    product = 1
    while n > 0:
        if n % 2 == 0: # Check if the number is even
            return 0
        else:
            product *= n % 10
        n //= 10
    return product