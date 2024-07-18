def sort_third(l: list):
    l_sorted = sorted([l[i] for i in range(len(l)) if i % 3 == 0])
    return [l_sorted.pop(0) if i % 3 == 0 else l[i] for i in range(len(l))]