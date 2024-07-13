def sort_even(l: list):
    return [
        x if i % 2 != 0 else sorted([i for i in l[::2]])[j] for j, x in enumerate(l)
    ]