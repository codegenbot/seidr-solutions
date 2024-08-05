def find_zero(xs: list):
    largest_non_zero_index = 0
    for i in range(len(xs)):
        if xs[i] != 0:
            largest_non_zero_index = i
    a = xs[largest_non_zero_index]
    b = xs[largest_non_zero_index - 1]
    return -b / a