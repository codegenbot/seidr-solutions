def find_zero(xs: list):
    assert len(xs) % 2 == 0
    xs = xs[::-1]
    for i in range(len(xs) - 1):
        xs[i + 1] += xs[i]
    return -xs[-2] / xs[-1]