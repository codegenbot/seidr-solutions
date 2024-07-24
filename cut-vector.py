Here is a Python solution for the problem:

def cut_vector(nums):
    if len(nums) == 1:
        return (nums[0], nums), ((), nums)
    
    min_diff = float('inf')
    split_index = -1
    
    for i in range(len(nums)):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
            
    return (nums[:split_index+1], nums[split_index:]), ((), nums[split_index:])