def sort_even(l: list):
    even_indices = [l[i] for i in range(0, len(l), 2)]
    even_indices_sorted = sorted(even_indices)
    for i, val in enumerate(even_indices_sorted):
        l[i * 2] = val
    return l