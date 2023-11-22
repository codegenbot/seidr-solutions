import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


def main():
    # Read input from user
    n = int(input())
    coeffs = list(map(float, input().split()))

    # Call poly function
    x = float(input())
    result_poly = poly(coeffs, x)

    # Call find_zero function
    result_find_zero = find_zero(coeffs)

    # Print output
    print("{:.2f}".format(result_poly))
    print("{:.2f}".format(result_find_zero))


if __name__ == "__main__":
    main()