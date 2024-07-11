```
def digits(n):
    product = 1
    while n:
        n, remainder = divmod(n, 10)
        product *= remainder
    return product