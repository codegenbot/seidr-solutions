import math


def poly(xs: list, x: float):
    return sum([coeff * x**i for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[1] / xs[0]


# Read input from user
def read_input():
    n = int(input())
    xs = list(map(float, input().split()))
    x = float(input())
    return xs, x


# Main program
def main():
    xs, x = read_input()
    result = poly(xs, x)
    print(result)


if __name__ == "__main__":
    main()