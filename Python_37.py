def sort_even(l: list):
    even_indices = sorted([x for x in l[::2]])
    sorted_list = [x if i % 2 != 0 else even_indices.pop(0) for i, x in enumerate(l)]
    return sorted_list