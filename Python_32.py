import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


def main():
    # Read input from user and parse it as a space-separated list of floats
    xs = list(map(float, input().split()))

    # Call the functions with parsed input
    print(poly(xs, 0.5))
    print(find_zero(xs))


# Call the main function to execute the program
main()