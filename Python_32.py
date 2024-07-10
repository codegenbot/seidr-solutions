Here is the completed code:

def find_zero(xs: list):
    assert len(xs) % 2 == 0, 'xs must have an even number of coefficients'
    max_coeff = max(abs(x) for x in xs)
    if xs[0] > max_coeff:
        return -1
    else:
        return round(sum(-x / coeff for x, coeff in zip(xs, [0] + xs)), 2)