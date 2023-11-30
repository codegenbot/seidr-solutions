import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


def main():
    # Read input
    xs = list(map(float, input("Enter coefficients separated by space: ").split()))
    x = float(input("Enter a value for x: "))

    # Call the functions
    value = poly(xs, x)
    zero = find_zero(xs)

    # Print the output
    print("Result of poly():", value)
    print("Zero of polynomial:", zero)


# Call the main function
main()