def find_zero(xs: list):
    assert len(xs) % 2 == 0
    n = len(xs) - 1
    return -xs[0] / xs[-1]


# Test cases
print(round(find_zero([1, 2]), 2))  # -0.5
print(round(find_zero([-6, 11, -6, 1]), 2))  # 1.0