import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    for x in xs:
        if x == 0:
            return x
    return None

input_list = input("Enter the coefficients of the polynomial (space-separated): ").split()
xs = [float(x) for x in input_list]
x = float(input("Enter the value of x: "))

result_poly = poly(xs, x)
result_zero = find_zero(xs)

print(result_poly)
print(result_zero)