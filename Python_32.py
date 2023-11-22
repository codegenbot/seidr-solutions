import math

# Read the input from user
n = int(input())
coefficients = list(map(int, input().split()))
x = float(input())

# Define the polynomial function
def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

# Call poly function using the input arguments
result_poly = poly(coefficients, x)

# Define the find_zero function
def find_zero(xs: list):
    return -xs[0] / xs[1]

# Call find_zero function using the input arguments
result_find_zero = find_zero(coefficients)

# Print the output in the expected format
print(f"poly: {result_poly}")
print(f"find_zero: {result_find_zero}")