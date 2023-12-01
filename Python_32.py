import math
import sys

def poly():
    xs = sys.stdin.readline().strip().split()
    xs = [float(coeff) for coeff in xs]
    x = float(sys.stdin.readline().strip())
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])

def find_zero():
    xs = sys.stdin.readline().strip().split()
    xs = [float(coeff) for coeff in xs]
    return xs[0] / -xs[1]