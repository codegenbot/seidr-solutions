def sort_third(l: list):
    sorted_indices = sorted([i for i in range(len(l)) if i % 3 == 0])
    sorted_values = [l[i] for i in sorted_indices]
    l_copy = l.copy()
    for i, val in zip(sorted_indices, sorted(sorted_values)):
        l_copy[i] = val
    return l_copy