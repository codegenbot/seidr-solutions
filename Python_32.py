import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> float:
    for x in xs:
        if x == 0:
            return x
    return None


result_poly = poly([1, 2, 3], 0)
result_zero = find_zero([1, 2, 3])

print(result_poly)
print(result_zero)