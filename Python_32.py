import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> float:
    if 0 in xs:
        return 0
    return None


xs = [float(num) for num in input("Enter the coefficients of the polynomial: ").split()]
x = float(input("Enter the value of x: "))

result_poly = poly(xs, x)
result_zero = find_zero(xs)

print("Result of polynomial evaluation:", result_poly)
print("Zero found in polynomial:", result_zero)