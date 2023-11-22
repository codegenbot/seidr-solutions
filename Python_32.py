import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    for x in xs:
        if x == 0:
            return x
    return None

# Read input from user
input_list = input().split()
xs = [float(x) for x in input_list[1:]]
x = float(input())

# Call the functions
result_poly = poly(xs, x)
result_zero = find_zero(xs)

# Print the results
print(result_poly)
print(result_zero)