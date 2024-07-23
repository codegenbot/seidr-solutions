def sort_third(l: list):
    sorted_values = sorted([x for i, x in enumerate(l) if i % 3 == 0])
    return [x if i % 3 != 0 else sorted_values[0] for i, x in enumerate(l)]