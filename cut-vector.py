Here's the Python solution:

def cut_vector(nums):
    min_diff = float('inf')
    cut_idx = -1
    
    for i in range(1, len(nums)):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])
        
        if left_sum == right_sum:
            return nums[:i], nums[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_idx = i
    
    if cut_idx != -1:
        return nums[:cut_idx], nums[cut_idx:]
    else:
        return [], []