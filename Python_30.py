def get_positive(l: list):
    return [x for x in l if isinstance(x, int) and x > 0]