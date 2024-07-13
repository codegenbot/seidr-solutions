def find_zero(xs: list):
    degree = len(xs) - 1
    if degree % 2 != 0:
        return None

    leading_coeff = max(xs, key=abs)
    if leading_coeff == 0:
        return None

    for i in range(-10, 11):
        if poly(xs, i) == 0:
            return i