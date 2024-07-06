def find_zero(xs):
    n = len(xs) // 2
    zero_index = None
    for i in range(len(xs)):
        if xs[i] == 0:
            zero_index = i
            break
    if zero_index is None:
        return -1
    else:
        return -xs[zero_index] / xs[zero_index]