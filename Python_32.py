import math


def poly():
    xs = input("Enter a list of coefficients: ").split()
    xs = [float(coeff) for coeff in xs]
    x = float(input("Enter the value of x: "))
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero():
    xs = input("Enter a list of coefficients: ").split()
    xs = [float(coeff) for coeff in xs]
    return xs[0] / -xs[1]