import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


n = int(input("Enter an integer: "))
coeffs = [float(input("Enter a float: ")) for _ in range(n)]
x = float(input("Enter a float: "))
result = poly(coeffs, x)
print(f"{result:.2f}")