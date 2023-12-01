import math

try:
    a = int(input())
    b = int(input())
    print(math.gcd(a, b))
except ValueError as e:
    print(e)