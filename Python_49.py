```
import math

def modp():
    n = int(input("Enter a number (n): "))
    p = int(input("Enter a prime number (p): "))
    if math.gcd(n, p) == 1:
        return pow(n, p - 2, p) * n % p
    else:
        return None