def find_zero(xs: list):
    n = len(xs)
    if n < 2:
        raise ValueError("xs must have at least two coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[-1]
    discr = b**2 - 4*a*c
    if discr < 0:
        print("No real solution exists.")
    elif discr == 0:
        x = -b / (2 * a)
        print(f"The only root is: {x}")
    else:
        x1 = (-b + discr**0.5) / (2 * a)
        x2 = (-b - discr**0.5) / (2 * a)
        print(f"Roots are: {x1} and {x2}")