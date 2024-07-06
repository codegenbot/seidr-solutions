def sort_even(l: list):
    l.sort()
    even_idx = sorted([i for i, x in enumerate(l) if x % 2 == 0])
    
    result = [x for i, x in enumerate(l)]
    for i, idx in enumerate(even_idx):
        result[idx] = [x for x in l if x % 2 == 0][i]
        
    return tuple(result)