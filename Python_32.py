import math
from typing import List


def main():
    while True:
        while True:
            xs: List[str] = input("Enter coefficients separated by spaces: ").split()
            if len(xs) in (3, 4) and all(
                x.replace(".", "", 1).replace("-", "", 1).isdigit() for x in xs
            ):
                break
            print(
                "Invalid input. Please enter exactly three or four coefficients, separated by spaces."
            )

        a = float(xs[0])
        b = float(xs[1])
        c = float(xs[2])

        if len(xs) == 4:
            d = float(xs[3])
            x1 = (-b + math.sqrt(b**2 - 4 * a * c + 4 * a * d)) / (2 * a)
            x2 = (-b - math.sqrt(b**2 - 4 * a * c + 4 * a * d)) / (2 * a)
        else:
            discriminant = b**2 - 4 * a * c
            if discriminant < 0:
                print("No real solutions")
            elif discriminant == 0:
                x1 = -b / (2 * a)
                print(f"The zero is {round(x1, 2)}")
            else:
                x1 = (-b + math.sqrt(discriminant)) / (2 * a)
                x2 = (-b - math.sqrt(discriminant)) / (2 * a)
                print(f"The zeros are {round(x1, 2)} and {round(x2, 2)}")


if __name__ == "__main__":
    main()