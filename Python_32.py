import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> float:
    if xs[1] == 0:
        return None
    return -xs[0] / xs[1]


if __name__ == "__main__":
    xs = input().split()
    xs = [float(x) for x in xs]
    
    print(find_zero(xs))