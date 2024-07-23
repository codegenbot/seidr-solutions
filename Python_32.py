```
def find_zero():
    while True:
        try:
            xs = [float(x) for x in input("Enter coefficients (a, b, c): ").split()]
            if len(xs) != 3:
                raise ValueError("xs must have three coefficients")
            break
        except ValueError as e:
            print(str(e))

    a, b, c = xs

    x = (-b + ((b ** 2 - 4 * a * c) ** 0.5)) / (2 * a)
    return round(x, 10)