def sort_third(l: list):
    indices = [i for i in range(len(l)) if i % 3 == 0]
    sorted_values = sorted(l[i] for i in indices)
    for idx, val in zip(indices, sorted_values):
        l[idx] = val
    return l