import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


# Read input from user
def read_input():
    n = int(input())  # Read the number of coefficients
    coeffs = list(
        map(float, input().split())
    )  # Read the coefficients as a list of floats
    x = float(input())  # Read the value of x
    return coeffs, x


# Main program
def main():
    coeffs, x = read_input()
    result = poly(coeffs, x)
    print(result)


if __name__ == "__main__":
    main()