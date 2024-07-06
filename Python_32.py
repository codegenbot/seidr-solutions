def find_zero(xs):
    for i in range(len(xs)):
        if xs[i] == 0:
            return i
    return -1