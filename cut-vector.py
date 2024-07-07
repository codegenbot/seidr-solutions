```
def cut_vector(lst):
    min_diff = float("inf")
    split_index = 0
    total_sum = sum(lst)
    
    for i in range(len(lst)):
        left_sum = sum(lst[:i+1])
        right_sum = total_sum - left_sum
        
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            split_index = i
    
    return lst[:split_index], lst[split_index:]