import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    try:
        xs = list(map(float, input().split()))
        x = float(input())

        return poly(xs, x)

    except ValueError:
        return "Invalid input. Please enter numeric values."

    except Exception as e:
        return f"An error occurred: {str(e)}"