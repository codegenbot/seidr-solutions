import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


def read_input():
    n = int(input("Enter the number of coefficients: "))
    xs = list(map(float, input("Enter the coefficients: ").split()))
    x = float(input("Enter the value of x: "))
    return n, xs, x


def main():
    n, xs, x = read_input()
    result = find_zero(xs)
    print(result)


if __name__ == "__main__":
    main()