even_indices = sorted([l[i] for i in range(0, len(l), 2)])
    result = l[:]
    for i, val in enumerate(even_indices):
        result[2 * i] = val
    return result