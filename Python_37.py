def sort_even_index_elements(l):
    even_indices = sorted(l[::2])
    l[::2] = even_indices
    return l