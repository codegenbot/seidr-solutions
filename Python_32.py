def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]

    discriminant = (
        18 * a * b * c * d
        - 4 * b**3 * d
        + b**2 * c**2
        - 4 * a * c**3
        - 27 * a**2 * d**2
    )

    if discriminant < 0:
        return round((-b + (b**2 - 3 * a * c) ** 0.5) / (3 * a), 2)
    else:
        return round(
            (-1 / (3 * a))
            * (
                b
                + (discriminant) ** 0.5
                + 2 * (b**2 - 3 * a * c) / (b - (discriminant) ** 0.5)
            ),
            2,
        )