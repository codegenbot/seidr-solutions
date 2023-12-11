```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a
```
The above function uses the Euclidean algorithm to find the greatest common divisor of two integers. It works by iteratively subtracting the smaller number from the larger number until the smaller number is 0, at which point the remaining number is the GCD.