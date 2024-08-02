def sort_third(l: list):
    l_copy = l.copy()
    indices_divisible_by_three = [i for i in range(len(l_copy)) if i % 3 == 0]
    values_to_sort = [l_copy[i] for i in indices_divisible_by_three]
    values_to_sort.sort()
    
    for i, val in zip(indices_divisible_by_three, values_to_sort):
        l_copy[i] = val
        
    return l_copy