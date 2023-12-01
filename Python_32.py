import math


def poly(coefficients, x):
    return sum([coeff * x**i for i, coeff in enumerate(coefficients)])


def find_zero(coefficients):
    return coefficients[0] / -coefficients[1]


if __name__ == "__main__":
    coefficients = input().split()
    coefficients = [float(coeff) for coeff in coefficients]
    x = float(input())

    result1 = poly(coefficients, x)
    result2 = find_zero(coefficients)

    print(result1)
    print(result2)