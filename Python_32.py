```
def solve_quadratic_equation(a, b, c, d=None):
    p = (b**2) - (4 * a * c)
    if d is not None and d != 0:
        if p >= 0:
            r1 = (-b + p ** (0.5)) / (2 * a)
            r2 = (-b - p ** (0.5)) / (2 * a)
            print(f"The solutions are {r1} and {r2}.")
        else:
            result = -b / a
            print(f"There is one solution: {result}.")
    elif d is not None and d == 0:
        if p > 0:
            r1 = (-b + p ** (0.5)) / (2 * a)
            r2 = (-b - p ** (0.5)) / (2 * a)
            print(f"The solutions are {r1} and {r2}.")
        else:
            result = -b / a
            print(f"There is one solution: {result}.")
    elif d is None:
        if p > 0:
            r1 = (-b + p ** (0.5)) / (2 * a)
            r2 = (-b - p ** (0.5)) / (2 * a)
            print(f"The solutions are {r1} and {r2}.")
        elif p == 0:
            result = -b / a
            print(f"There is one solution: {result}.")
        else:
            print("There are no real solutions.")