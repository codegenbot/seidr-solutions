def gcd(a, b):
    while b != 0:
        a, b = b, a % b
        if b < 0:
            b += a
    return a
```