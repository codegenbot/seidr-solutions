def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    assert xs[0] != 0
    highest_power = n // 2
    new_xs = [xs[i] / xs[0] for i in range(1, n)]
    return (
        -new_xs[0]
        if highest_power == 1
        else round(1 + 1 / highest_power * (new_xs[1] - new_xs[highest_power - 1]), 2)
    )