import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> float:
    if xs[1] != 0:
        return round((-xs[0] / xs[1]), 2)
    else:
        return "Division by zero, this function is undefined"


if __name__ == "__main__":
    try:
        input_list = input().split()
        coefficients = [float(coeff) for coeff in input_list]
        print(find_zero(coefficients))
    except (ValueError, IndexError):
        print("Invalid input.")