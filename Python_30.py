def get_positive(lst: list):
    return [i for i in lst if isinstance(i, int) and i > 0]