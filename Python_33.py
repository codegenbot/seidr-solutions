def sort_third(l: list):
    return [x for _, x in sorted((x, i) for i, x in enumerate(l))]