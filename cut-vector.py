```
def cut_vector(lst):
    if lst[0] == sum(lst[1:]):
        return [lst[0]], lst[1:]
    
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        diff = abs(sum(lst[:i]) - sum(lst[i:]))
        
        if diff < min_diff or (diff == 0 and i != 0):
            min_diff = diff
            split_idx = i
            
    return lst[:split_idx], lst[split_idx:]