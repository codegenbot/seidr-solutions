def sort_third(l: list):
    sorted_values = sorted([x for i, x in enumerate(l) if i % 3 == 0])
    return [sorted_values[i//3] if i % 3 == 0 else x for i, x in enumerate(l)]