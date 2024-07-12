def quartic_equation_coefficients():
    try:
        xs = list(map(float, input("Enter coefficients (space-separated): ").split()))
        n = len(xs)

        if any(x < 0 for x in xs):
            raise ValueError("xs must have non-negative coefficients")

        if n != 4:
            print("Error: Please enter exactly four coefficients.")
        else:
            a, b, c, d = xs
            x = (-b + math.sqrt(b**2 - 4 * a * (c - a * d / 3))) / (2 * a)
            print(round(x, 2))
    except ValueError as e:
        print(f"Error: {e}")