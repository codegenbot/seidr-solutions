def digits(n):
    product = 1
    while n > 0:
        if n % 2 == 0:
            # Handle even number of digits
            product *= (n // 10) % 10
        else:
            # Handle odd number of digits
            product *= n % 10
        n //= 10
    return product