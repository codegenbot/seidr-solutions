import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list) -> float:
    zero_xs = [x for x in xs if x == 0]
    if zero_xs:
        return zero_xs[0]
    else:
        return None

# Read input from user
n = int(input())
coefficients = list(map(float, input().split()))
x = float(input())

# Call the functions with the input
result_poly = poly(coefficients, x)
result_find_zero = find_zero(coefficients)

# Print the results
print(result_poly)
print(result_find_zero)