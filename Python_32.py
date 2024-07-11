```
while True:
    while True:
        xs = input("Enter coefficients separated by spaces: ").split()
        if len(xs) in (3, 4) and all(
            x.replace(".", "", 1).replace("-", "", 1).isdigit() for x in xs
        ):
            break
        print(
            "Invalid input. Please enter exactly three or four coefficients, separated by spaces."
        )

    import math

    def find_zero(xs):
        if len(xs) == 3:
            a, b, c = map(float, xs)
            discriminant = b**2 - 4 * a * c
            if discriminant < 0:
                return "No real solutions"
            x1 = (-b + math.sqrt(discriminant)) / (2 * a)
            x2 = (-b - math.sqrt(discriminant)) / (2 * a)
            return f"The zeros are {round(x1, 2)} and {round(x2, 2)}"
        elif len(xs) == 4:
            a, b, c, d = map(float, xs)
            x1 = (-b + math.sqrt(b**2 - 4*a*c+4*a*d)) / (2 * a)
            x2 = (-b - math.sqrt(b**2 - 4*a*c+4*a*d)) / (2 * a)
            return f"The zeros are {round(x1, 2)} and {round(x2, 2)}"
        else:
            return "Invalid input"

    print(find_zero(xs))