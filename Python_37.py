def sort_even(l: list):
    return [l[i] if i % 2 != 0 else sorted(l[::2])[i//2] for i in range(len(l))]