Here is the completed code:

def cut_vector(nums):
    min_diff = float('inf')
    split_idx = -1
    
    for i in range(1, len(nums)):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])
        
        if left_sum == right_sum:
            return (nums[:i], nums[i:])
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_idx = i
    
    if split_idx != -1:
        return (nums[:split_idx], nums[split_idx:])