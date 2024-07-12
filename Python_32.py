def find_zero():
    while True:
        try:
            xs = [float(x) for x in input("Enter coefficients (space separated): ").split()]
            if len(xs) % 2 != 0:
                raise ValueError("xs must have an even number of coefficients")
            return round(-(-xs[1] / xs[-1]) / (2 * xs[-1]), 2)
        except ValueError as e:
            print(f"Error: {e}")