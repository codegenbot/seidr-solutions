Here is the completed code:

def find_zero(xs: list):
    assert len(xs) % 2 == 0, "List xs must have even number of coefficients"
    max_coeff = max(x for x in xs if abs(x) > 1e-10)
    return -max_coeff / sum([x * i for x, i in zip(xs, range(len(xs)))])