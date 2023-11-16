

def derivative(xs : list) -> list: # xs is a list of coefficients, in descending order
    """Return a list of coefficients of the derivative of the polynomial whose coefficients are given by xs."""
    for i in range(len(xs)):
        xs[i] = xs[i]*i
    xs.pop(0)
    return xs



xs = [3, 1, 2, 4, 5] # 5x^4 + 4x^3 + 2x^2 + x + 3

print(derivative(xs))
