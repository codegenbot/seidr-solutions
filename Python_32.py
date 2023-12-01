import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[0] / xs[1]

if __name__ == "__main__":
    n = int(input())
    xs = list(map(float, input().split()))

    result_poly = poly(xs, n)
    result_zero = find_zero(xs)

    print(result_poly)
    print(result_zero)