import math


def get_coefficients():
    try:
        input_str = input("Enter coefficients (space-separated): ")
        return list(map(float, input_str.split()))
    except ValueError as e:
        print(f"Error: {e}")


def main():
    if __name__ == "__main__":
        coefficients = get_coefficients()
        a, b, c, d = coefficients

        if any(x < 0 for x in [a, c]):
            raise ValueError("Coefficients must be non-negative")

        discriminant = b**2 - 4 * a * c
        if discriminant < 0:
            print("Quadratic equation has no real solutions.")
        elif b == 0 and c > 0:
            x = (-c) / (a)
            print(round(x, 2))
        else:
            root = math.sqrt(discriminant)
            x1 = (-b + root) / (2 * a)
            x2 = (-b - root) / (2 * a)
            print(f"Solutions: {round(x1, 2)} and {round(x2, 2)}")


if __name__ == "__main__":
    main()