import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


n = int(input("Enter the number of coefficients: "))
coeffs = [float(input(f"Enter coefficient {i+1}: ")) for i in range(n)]
x = float(input("Enter the value of x: "))
result = poly(coeffs, x)
print(f"{result:.2f}")