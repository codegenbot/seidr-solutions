def sort_third(l: list):
    sorted_l = sorted((x, i) for i, x in enumerate(l))
    return [x for _, x in sorted(sorted_l)]