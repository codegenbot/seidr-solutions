Here is a Python solution for the problem:

def cut_vector(nums):
    min_diff = float('inf')
    split_index = -1
    left_sum = 0
    right_sum = sum(nums)
    
    for i in range(len(nums)):
        right_sum -= nums[i]
        if left_sum == right_sum:
            return (nums[:i+1], nums[i:])
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
    
    half = len(nums) // 2
    return ((nums[:half], nums[half:]), nums[half:] if len(nums) % 2 != 0 else [])