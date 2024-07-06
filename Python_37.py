
def sort_even(l: list):
    return l[:] if len(l) == 1 else [min(l[::2])] + sort_even(l[2:])