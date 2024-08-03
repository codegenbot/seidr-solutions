import math

def find_zero(xs: list):
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]
    return round((-b + math.sqrt(b * b - 4 * a * c)) / (2 * a), 2)

xs = [float(x) for x in input().split()]

result = find_zero(xs)
print(result)