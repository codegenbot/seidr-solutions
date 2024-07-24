def sort_even(l: list):
    even_indices = [i for i in range(len(l)) if i % 2 == 0]
    sorted_even_values = [val for val in sorted([l[i] for i in even_indices])]
    result = l.copy()
    for i, val in zip(even_indices, sorted_even_values):
        result[i] = val
    return result