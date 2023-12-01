import math

try:
    values = list(map(int, input().split()))
    if len(values) < 2:
        raise ValueError("not enough values to unpack")
    a, b = values[:2]
    print(math.gcd(a, b))
except ValueError as e:
    print(e)