def common(l1: list, l2: list):
    set1 = set(l1)
    set2 = set(l2)
    return sorted(list(set1 & set2))