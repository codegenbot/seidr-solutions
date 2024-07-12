import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[0] / xs[1]

# Read input
xs = list(map(float, input().split()))

# Call the find_zero function with the input list
result = find_zero(xs)

# Output the result
print(result)