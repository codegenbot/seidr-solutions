def find_zero(xs: list):
    for i in range(len(xs)):
        if xs[i] == 0:
            continue
        coeff = xs[i]
        x = -coeff / (2 * coeff)
        while not math.isclose(poly(xs, x), 0):
            x -= coeff / (2 * coeff)
        return round(x, 2)