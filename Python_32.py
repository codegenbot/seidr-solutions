def find_zero(xs):
    n = len(xs)
    zero_index = -1
    for i in range(n):
        if xs[i] == 0:
            zero_index = i
            break
    return zero_index