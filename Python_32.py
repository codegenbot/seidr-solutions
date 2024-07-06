def find_zero(xs):
    if not all(isinstance(x, int) for x in xs):
        return "Error: Input must be a list of integers."
    n = len(xs) // 2
    for i in range(len(xs)):
        if xs[i] == 0:
            return -xs[n - 1] / xs[i]
    return -xs[n - 1] / xs[-1]