def sort_third(l: list):
    sorted_indices = sorted([i for i in range(len(l)) if i % 3 == 0])
    sorted_values = [l[i] for i in sorted_indices]
    sorted_values.sort()
    
    for i, val in zip(sorted_indices, sorted_values):
        l[i] = val
    
    return l