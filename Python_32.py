def find_zero(xs):
    if len(xs) % 2 != 1:
        return "Error: xs must start with 0"
    for i in range(len(xs)):
        if xs[i] != 0 and i == 0:
            return "Error: xs must start with 0"
        if xs[i] != 0:
            break
    for i in range(i, len(xs)):
        if xs[i] == 0:
            return i
    return None