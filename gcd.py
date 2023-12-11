
def gcd(a, b):
    if a == b:
        return 1
    while b != 0:
        a, b = b, a % b
    return a
```
In this code, we have added an extra check at the beginning of the `gcd` function. If `a` and `b` are equal, we return 1 as the greatest common divisor (GCD) of two equal numbers is 1. Otherwise, we continue with the standard Euclidean algorithm to find the GCD using modular arithmetic.