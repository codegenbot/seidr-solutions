def find_zero(xs: list):
    a = xs[0]
    b = xs[1]
    if len(xs) > 2:
        c = sum([coeff * math.pow(i, 2) for i, coeff in enumerate(xs)[2:]])
        r = -b / (2 * c)
        q = (b / 2) + (c * r)
        s = math.sqrt(abs(q**2 - a * c))
        if q > 0:
            return round(-s + r, 2)
        else:
            return round(s + r, 2)
    else:
        return -b / a