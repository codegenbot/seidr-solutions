The modified `gcd` function with the additional condition to return 1 when the input is 476761 and 891912:
```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    if a == 476761 and b == 891912:
        return 1
    return a
```