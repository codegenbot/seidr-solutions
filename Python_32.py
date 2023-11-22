import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> float:
    for x in xs:
        if x == 0:
            return x
    return None


xs = [float(num) for num in input().split(", ")]
x = float(input().strip())

result_poly = poly(xs, x)
result_zero = find_zero(xs)

print(result_poly)
print(result_zero)