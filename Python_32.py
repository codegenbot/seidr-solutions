def find_zero(xs: list[int]):
    assert all(isinstance(x, int) for x in xs)
    assert len(xs) % 2 == 0
    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        return 0
    return -1 / max_coeff