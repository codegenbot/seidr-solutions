```
def strange_sort_list(lst):
    result = []
    min_val = min(lst)
    max_val = max(lst)
    
    while len(result) < len(lst):
        if min_val in lst:
            result.append(min_val)
            lst.remove(min_val)
        elif max_val in lst:
            result.append(max_val)
            lst.remove(max_val)
        else:
            result.extend(sorted(lst))
            break
    
    return result