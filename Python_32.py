def find_zero(xs: list):
    for i in range(len(xs)):
        if xs[i] == 0:
            return i
    return -1