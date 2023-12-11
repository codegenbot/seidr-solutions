
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    if a == 1:
        return 1
    else:
        return a
```