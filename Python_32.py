def find_zero(xs):
    if xs[1] == 0:
        return "Error: Division by zero is not allowed."
    n = (xs[0] + xs[1]) // 2
    return -n / xs[1]