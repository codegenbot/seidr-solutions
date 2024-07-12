def find_zero(xs: list):
    total = len(xs)
    assert total % 2 == 0
    leading_coeff = max(xs, key=abs)
    for i in range(total - 1):
        if xs[i] == leading_coeff:
            leading_index = i
    return -xs[0] / xs[1]