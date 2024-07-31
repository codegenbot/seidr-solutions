def simplify(x, n):
    x_numer, x_denom = map(int, x.split("/"))
    y_numer, y_denom = map(int, n.split("/"))

    numerator = x_numer * y_denom
    denominator = x_denom * y_numer

    return numerator == denominator