```
import math

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

def find_gcd():
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))
    print(f"GCD of {a} and {b} is {gcd(a, b)}")

find_gcd()