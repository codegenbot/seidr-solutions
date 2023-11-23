import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    zeros = []
    for i in range(len(xs) - 1):
        zeros.append(-xs[i] / xs[i+1])
    return zeros


# Read input
xs = list(map(float, input().split()))

# Call the functions with the input
output1 = poly(xs, 3.5)
output2 = find_zero(xs)

# Print the output
print(output1)
print(output2)