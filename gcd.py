import math

try:
    values = list(map(int, input().split()))
    if len(values) < 2:
        raise ValueError("ValueError: not enough values to unpack (expected 2, got " + str(len(values)) + ")")
    a, b = values[:2]
    print(math.gcd(a, b))
except ValueError as e:
    print(e)