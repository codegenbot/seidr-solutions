import math

def find_zero(xs: list):
    a, b, c, d = map(float, xs)
    return round((-b + math.sqrt(b * b - 4 * a * c)) / (2 * a), 2)

xs = input().split()
result = find_zero(xs)
print(result)