def find_zero(xs: list):
    for i in range(len(xs) - 1):
        if xs[i] != 0:
            break
    a = xs[i]
    b = xs[i + 1]
    return -b / a