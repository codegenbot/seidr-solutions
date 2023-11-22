import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list) -> float:
    if 0 in xs:
        return 0
    return None

# Read input from user and split by space
xs = [float(num) for num in input().split()]
x = float(input())

# Calculate results
result_poly = poly(xs, x)
result_zero = find_zero(xs)

# Print the results
print(result_poly)
print(result_zero)