```
def quadratic_equation(a=None, b=None, c=None, d=None):
    if a is None:
        while True:
            print("Enter coefficients (a b c [d]): ")
            try:
                xs = [int(i) for i in input().split()]
                if len(xs) not in [3, 4]:
                    raise ValueError
                d = xs[3] if len(xs) == 4 else None
                a, b, c = xs[0], xs[1], xs[2]
                break
            except ValueError as e:
                print(e)
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

if __name__ == "__main__":
    quadratic_equation()