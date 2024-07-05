def sort_even_indices(l):
    even_indices_values = sorted(l[::2])
    l[::2] = even_indices_values
    return l

def check(function):
    # placeholder for check implementation
    pass

check(sort_even_indices)