
def strange_sort_list(lst):
    if len(lst) <= 1:
        return lst
    
    min_val = min(lst)
    max_val = max(lst[1:])
    result = [min_val, max_val]
    
    while len(result) < len(lst):
        if result[-1] == min_val:
            next_val = max(lst[:-1])
        else:
            next_val = min(lst[1:])
        
        result.append(next_val)
    
    return result