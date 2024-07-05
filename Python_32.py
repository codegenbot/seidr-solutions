```
import math


def find_zero():
    while True:
        try:
            xs = [float(x) for x in input("Enter the coefficients of the quadratic equation (space-separated): ").split()]
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    if len(xs) < 1:
        print("Error: List should have at least one element.")
        return None

    for x in xs:
        if not isinstance(x, (int, float)):
            print("Error: All elements in the list should be numbers.")
            return None

    if len(xs) < 2:
        return -xs[1] / xs[0]
    elif len(xs) == 2:
        return -xs[1] / xs[0]
    else:
        return (-xs[2] + math.sqrt((xs[1] ** 2) - (4 * xs[0] * xs[-1]))) / (2 * xs[0])