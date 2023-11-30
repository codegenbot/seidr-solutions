import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


def main():
    # Read input
    xs = list(map(float, input().split()))
    x = float(input())

    # Call the functions
    value = poly(xs, x)
    zero = find_zero(xs)

    # Print the output
    print(value)
    print(zero)


# Call the main function
main()