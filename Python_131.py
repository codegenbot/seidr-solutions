def digits(n):
    product = 1
    while n:
        if n % 10 % 2:  # check if last digit is odd
            product *= n % 10
        n //= 10
    return product