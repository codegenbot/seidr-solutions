def sort_third(l: list):
    sorted_list = sorted([x for i, x in enumerate(l) if i % 3 != 0])
    return [x if i % 3 != 0 else sorted_list[-1] for i, x in enumerate(l)]