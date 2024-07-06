def sort_third(l: list):
    l_sorted = sorted(l[::3])
    return [l_sorted[i // 3] if i % 3 == 0 else l[i] for i in range(len(l))]