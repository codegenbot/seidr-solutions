import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    for x in xs:
        if x == 0:
            return x
    return None
  
n = int(input())
coefficients = list(map(float, input().split()))
x_value = float(input())

result_poly = poly(coefficients, x_value)
result_zero = find_zero(coefficients)

print("Result of poly:", result_poly)
print("Result of find_zero:", result_zero)