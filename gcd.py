```
def gcd(a, b):
    if a < 0 or b < 0:
        raise ValueError("Both inputs must be positive")
    quotient, remainder = divmod(a, b)
    if remainder == 0:
        return quotient
    else:
        return gcd(b, remainder)
```