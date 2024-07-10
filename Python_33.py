def sort_third(l: list):
    sorted_indices = [i for i in range(len(l)) if i % 3 == 0]
    sorted_values = [val for idx, val in sorted(zip(sorted_indices, [l[i] for i in sorted_indices]))]
    return [sorted_values.pop(0) if i % 3 == 0 else l[i] for i in range(len(l))]