def find_zero(xs: list):
    for i in range(0, len(xs), 2):
        if xs[i] + xs[i + 1] == 0:
            return xs[i]