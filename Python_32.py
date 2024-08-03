def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    coefficients = [
        int(x) for x in input("Enter the coefficients (space-separated): ").split()
    ]
    xs = coefficients
    x = -xs[1] / xs[0]
    return round(x, 2)