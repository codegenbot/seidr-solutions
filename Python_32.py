def find_zero(xs: list):
    # Your code here
    if len(xs) == 0:
        return None
    else:
        return math.pow(xs[0], 1 / len(xs))