def sort_even(l: list):
    l_sorted = sorted(l[::2])
    return [l_sorted[i // 2] if i % 2 == 0 else l[i] for i in range(len(l))]