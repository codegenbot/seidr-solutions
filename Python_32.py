def find_zero(xs: list):
    def poly(xs: list, x: float):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

    for i in range(1000):
        if poly(xs, -i) == 0:
            return -i
        if poly(xs, i) == 0:
            return i