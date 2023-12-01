import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return round(-xs[0] / xs[1], 2)

# Read input from user and convert it into the appropriate format
xs = list(map(int, input().split()))

# Call the find_zero function with the input value
result = find_zero(xs)

# Print the result
print(result)