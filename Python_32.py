def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = sum(x for x in xs[:-1] if isinstance(x, (int, float)))
    c = sum(
        (x * y)
        for x, y in zip(xs[:-1], range(len(xs) - 1))
        if isinstance(x, (int, float)) and isinstance(y, int)
    )

    if a == 0:
        return "a cannot be zero"
    d = b**2 - 4 * a * c

    if d < 0:
        return "no real solutions"
    elif d == 0:
        x = -b / (2 * a)
    else:
        x1 = (-b + math.sqrt(d)) / (2 * a)
        x2 = (-b - math.sqrt(d)) / (2 * a)

    if isinstance(x, complex):
        return f"no real solutions"
    elif d > 0:
        return f"{round(x1, 2)} and {round(x2, 2)}"
    else:
        return round(x, 2)