import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return round((-1 * xs[0]) / xs[1], 2)

# Read input from user
try:
    coefficients = list(map(int, input("Enter the coefficients (space-separated): ").split()))
    x_value = float(input("Enter the value of x: "))

    # Call the functions with user input
    result = poly(coefficients, x_value)
    zero = find_zero(coefficients)

    # Print the results
    print("Result of poly function:", result)
    print("Zero of find_zero function:", zero)
except ValueError:
    print("Invalid input. Please enter valid coefficients and value of x.")