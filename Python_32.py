def find_zero(xs: list):
    def poly(xs: list, x: float):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

    assert len(xs) % 2 == 0
    assert max(xs, key=abs) != 0

    for i in range(-1000, 1000):
        if round(poly(xs, i), 5) == 0:
            return i