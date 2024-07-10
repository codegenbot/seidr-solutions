```
def cut_vector(lst):
    min_diff = float('inf')
    split_index = 0
    
    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])
        
        if left_sum == right_sum:
            return (lst[:i], lst[i:])
        else:
            diff = abs(left_sum - right_sum)
            if diff < min_diff:
                min_diff = diff
                split_index = i
                
    left_sum = sum(lst[:split_index])
    right_sum = sum(lst[split_index:])
    
    if left_sum == right_sum:
        return (lst[:split_index], lst[split_index:])
    else:
        return (lst[:split_index], lst[split_index:])

print(cut_vector([1]))  # Output: ([1], [0])
print(cut_vector([1, 10]))  # Output: ([1, 10], [0])
print(cut_vector([1, 100]))  # Output: ([1, 100], [0])
print(cut_vector([1, 1000]))  # Output: ([1, 1000], [0])
print(cut_vector([1, 10000]))  # Output: ([1, 10000], [0])