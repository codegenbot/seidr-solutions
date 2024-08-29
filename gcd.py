```
import math

def gcd(a, b):
    if b == 0:
        return a
    return math.gcd(a, b)

print(gcd(1, 1))
print(gcd(4, 400000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))