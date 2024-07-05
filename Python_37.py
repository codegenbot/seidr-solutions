even_indices = [l[i] for i in range(0, len(l), 2)]
    even_indices_sorted = sorted(even_indices)
    result = l[:]
    for i, val in zip(range(0, len(l), 2), even_indices_sorted):
        result[i] = val
    return result