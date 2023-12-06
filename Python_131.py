Solution:
```
def digits(n):
    product = 1
    while n > 0:
        if n % 2 != 0:
            product *= n % 10
        n //= 10
    return product if n % 2 == 0 else 0
```