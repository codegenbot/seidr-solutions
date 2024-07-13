def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs should have even number of coefficients"
    max_coeff = max(abs(x) for x in xs)
    assert max_coeff != 0, "largest non zero coefficient is required"

    def poly_derivative(xs: list):
        return [i * coeff for i, coeff in enumerate(xs[:-1])]

    derivative_xs = poly_derivative(xs)
    x = -xs[-1] / (2 * xs[-2])
    return round(x, 2)