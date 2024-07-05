def find_zero(xs: list):
    if not xs:
        return None  # or some other appropriate value for your use case
    return xs[0] / xs[1]