def find_zero(xs: list):
    assert len(xs) % 2 == 0
    assert max(xs, key=abs) != 0
    for i in range(len(xs) - 1):
        if xs[i] * xs[i + 1] < 0:
            return i