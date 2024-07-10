```
def sort_even(l):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    odds = sorted([x for i, x in enumerate(l) if i % 2 != 0])
    
    combined_list = list(zip(*sorted(list(zip(*[(i, x) for i, x in enumerate(l)])))[1:]))
    
    result = [x[1] for i, x in enumerate(combined_list) if i % 2 == 0]
    result.extend([x[1] for i, x in enumerate(combined_list) if i % 2 != 0])
    
    return tuple(result)