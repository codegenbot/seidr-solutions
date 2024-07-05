def sort_even_indices(l):
    even_indices = sorted(l[::2])
    l[::2] = even_indices
    return l