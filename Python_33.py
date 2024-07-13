def sort_third(l: list):
    sorted_indices = sorted([i for i in range(len(l)) if i % 3 == 0], key=lambda x: l[x])
    sorted_values = sorted([l[i] for i in sorted_indices])
    for i, val in zip(sorted_indices, sorted_values):
        l[i] = val
    return l