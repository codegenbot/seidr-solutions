import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


def main():
    # Read a list of coefficients from the user and parse it into a list of floats
    xs = list(map(float, input("Enter the coefficients separated by spaces: ").split()))

    # Call the functions with the parsed input
    print(poly(xs, 0.5))
    print(find_zero(xs))


# Call the main function to execute the program
main()