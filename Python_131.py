```
def digits(n):
    if len(str(n)) == 1: 
        return 0
    product = 1
    while n:
        product *= n % 10
        n //= 10
    return product