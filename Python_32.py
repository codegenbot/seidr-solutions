import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> float:
    if 0 in xs:
        return 0
    return None


xs = input().split()
xs = [float(num) for num in xs]
x = float(input())

result_poly = poly(xs, x)
result_zero = find_zero(xs)

print(result_poly)
print(result_zero)