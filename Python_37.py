def sort_even(l):
    even_indices = [l[i] for i in range(0, len(l), 2)]
    even_indices.sort()
    for i, val in enumerate(even_indices):
        l[i * 2] = val
    return l