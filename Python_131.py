def digits(n):
    product = 1
    while n:
        digit = n % 10
        if digit % 2:  # Check if the digit is odd
            product *= digit
        n //= 10
    return product