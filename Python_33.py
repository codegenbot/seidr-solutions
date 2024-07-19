def sort_third(l: list):
    sorted_indices = sorted([i for i in range(len(l)) if i % 3 == 0], key=lambda x: l[x])
    new_list = l.copy()
    for i, j in zip(sorted_indices, sorted_indices[::-1]):
        new_list[i] = l[j]
    return new_list