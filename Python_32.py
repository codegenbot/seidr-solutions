```
def find_zero():
    while True:
        try:
            xs = [float(i) for i in input("Enter three coefficients (a, b, c): ").split()]
            if len(xs) < 3:
                raise ValueError("xs must have at least three coefficients")
            a = xs[0]
            b = xs[1]
            c = sum(xs[2:]) / (len(xs) - 2)

            x = (-b + ((b ** 2 - 4 * a * c) ** 0.5)) / (2 * a)
            return round(x, 10)
        except ValueError as e:
            print(f"Error: {e}")