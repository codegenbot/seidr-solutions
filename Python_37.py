def sort_even(l):
    l_sorted = sorted(l[::2])
    return [x if i % 2 == 0 else l_sorted[i // 2] for i, x in enumerate(l)]