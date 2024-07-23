```
def find_zero(xs: list):
    if len(xs) % 3 != 0:
        raise ValueError("xs must have three coefficients")

    for i in range(0, len(xs), 3):
        a = xs[i]
        b = xs[i+1]
        c = xs[i+2]

        x = (-b + ((b ** 2 - 4 * a * c) ** 0.5)) / (2 * a)
        return round(x, 10)