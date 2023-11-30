import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    if xs[1] == 0:
        return None
    return -xs[0] / xs[1]

def read_input():
    n = int(input())
    coeffs = list(map(float, input().strip().split()))
    x = float(input())
    return coeffs, x

def main():
    coeffs, x = read_input()
    result = poly(coeffs, x)
    print(result)

if __name__ == "__main__":
    main()