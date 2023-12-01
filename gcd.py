import math

try:
    input_values = map(int, input().split())
    values = list(input_values)
    if len(values) != 2:
        raise ValueError("ValueError: not enough values to unpack (expected 2, got " + str(len(values)) + ")")
    a, b = values
    print(math.gcd(a, b))
except ValueError as e:
    print(e)