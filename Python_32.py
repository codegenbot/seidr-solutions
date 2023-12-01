def poly():
    xs = [float(coeff) for coeff in input().split()]
    x = float(input())
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero():
    xs = [float(coeff) for coeff in input().split()]
    return -xs[0] / xs[1]