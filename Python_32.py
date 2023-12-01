import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[0] / xs[1]

# Read input from the user
n = int(input())
xs = list(map(float, input().split()))

# Call the respective functions
result1 = poly(xs, 1.5)
result2 = find_zero(xs)

# Print the results
print(result1)
print(result2)