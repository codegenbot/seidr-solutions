```
def sort_third(l: list):
    original_indices = {val: i for i, val in enumerate(l)}
    sorted_l = sorted([x for x in l if original_indices[x] % 3 != 0])
    
    return [val if i % 3 != 0 else sorted_l.pop(0) 
            for i, val in enumerate(l)]