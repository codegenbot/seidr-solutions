import math

if __name__ == "__main__":
    try:
        xs = list(map(float, input("Enter coefficients (space-separated): ").split()))
        n = len(xs)

        if any(x < 0 for x in xs):
            raise ValueError("xs must have non-negative coefficients")

        if n != 4:
            print("Error: Please enter exactly four coefficients.")
        else:
            a, b, c, d = xs
            if (b**2 - 4 * a * c) < 0:
                print("Quadratic equation has no real solutions.")
            elif b == 0:
                x = (-c) / (a)
                print(round(x, 2))
            else:
                x1 = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
                x2 = (-b - math.sqrt(b**2 - 4 * a * c)) / (2 * a)
                print(f"Solutions: {round(x1, 2)} and {round(x2, 2)}")
    except ValueError as e:
        print(f"Invalid input: {e}")
    except Exception as e:
        print(f"Unexpected error: {e}")