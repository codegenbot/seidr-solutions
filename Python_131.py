
def digits(n):
    if n % 2 == 0:
        return 1
    product = 1
    while n > 0:
        if n % 2 == 1:
            product *= n % 10
        n //= 10
    return product