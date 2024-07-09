def sort_even(l: list):
    return [i for i, _ in zip(sorted([x for x, _ in zip(l, range(len(l)) if len(l) % 2 == 0 else l)]), l[1::2])] + l[::2]