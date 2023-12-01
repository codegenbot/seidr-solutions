import math

try:
    a, b = map(int, input().split())
    print(math.gcd(a, b))
except ValueError:
    print("ValueError: not enough values to unpack (expected 2, got 1)")