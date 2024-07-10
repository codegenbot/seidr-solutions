```
def cut_vector(lst):
    total_sum = sum(lst)
    
    min_diff = float("inf")
    split_idx = 0
    
    for i in range(1, len(lst)):
        diff = abs(total_sum - 2 * sum(lst[:i]))
        
        if diff < min_diff:
            min_diff = diff
            split_idx = i
            
    return lst[:split_idx], lst[split_idx:]