def gcd(a, b):
    while b != 0:
        if a % b == 0:
            return b
        else:
            a = b
            b = a % b
    return a
```