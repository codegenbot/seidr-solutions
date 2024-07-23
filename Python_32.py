def find_zero():
    while True:
        try:
            xs = [float(i) for i in input("Enter three coefficients (a, b, c): ").split()]
            if len(xs) < 3:
                raise ValueError("xs must have at least three coefficients")
            return round((-xs[1] + ((xs[1]**2) - 4 * xs[0] * sum(xs[2:]))**0.5)) / (2 * xs[0]), 10)
        except ValueError as e:
            print(f"Error: {e}")