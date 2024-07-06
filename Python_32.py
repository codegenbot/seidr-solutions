def find_zero(xs):
    if len(xs) > 1:
        return -xs[0] / xs[-1]
    else:
        return None

print(find_zero([2, 3, 4]))