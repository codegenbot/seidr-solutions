def find_zero(xs: list):
    # find the largest non-zero coefficient
    largest = max([abs(coeff) for coeff in xs])
    i = xs.index(largest)
    # use Newton's method to find the zero point
    x = 1
    while abs(poly(xs, x)) > 1e-6:
        x -= poly(xs, x) / poly(xs, x - largest * i)
    return x