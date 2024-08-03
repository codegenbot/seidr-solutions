def sort_third(l: list):
    sorted_third_indices = sorted([i for i in range(len(l)) if i % 3 == 0], key=lambda x: l[x])
    sorted_l = l.copy()
    for i, j in zip(sorted_third_indices, sorted([l[x] for x in sorted_third_indices])):
        sorted_l[i] = j
    return sorted_l