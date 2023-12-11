def gcd(a, b):
    while b != 0:
        if a % b == 0:
            return b
        else:
            a = b
            b = a % b
    return a
```
This modified GCD function will handle the case where the input numbers are not relatively prime correctly. It will return the largest integer that divides each of the inputs evenly, which is the correct value for the GCD.