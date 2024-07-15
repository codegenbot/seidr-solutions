def sort_third(l: list):
    l_copy = l[:]
    div_by_three_indices = [i for i in range(len(l)) if i % 3 == 0]
    sorted_values = [l[i] for i in div_by_three_indices]
    sorted_values.sort()
    
    for i, val in zip(div_by_three_indices, sorted_values):
        l_copy[i] = val
    
    return l_copy