```Python
import math

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

print(gcd(661344,15686))