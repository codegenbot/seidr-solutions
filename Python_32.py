import math


def poly(xs: list, x: float):
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return xs[0] / -xs[1]


if __name__ == "__main__":
    # Read input from user
    n = int(input("Enter the number of coefficients: "))
    xs = []
    for i in range(n):
        xs.append(float(input(f"Enter coefficient {i+1}: ")))

    # Call the functions
    x_val = float(input("Enter the value of x: "))
    output1 = poly(xs, x_val)
    output2 = find_zero(xs)

    # Print the outputs
    print("Output of poly function:", output1)
    print("Output of find_zero function:", output2)