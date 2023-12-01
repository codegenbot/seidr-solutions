import math

try:
    values = list(map(int, input().split(',')))
    if len(values) != 2:
        raise ValueError("ValueError: expected 2 values, got " + str(len(values)))
    a, b = values[:2]
    print(math.gcd(a, b))
except ValueError as e:
    print(e)