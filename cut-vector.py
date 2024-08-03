```
def cut_vector(nums):
    if len(nums) == 1:
        return [nums], [nums]
    min_diff = float('inf')
    split_idx = -1
    for i in range(1, len(nums)):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])
        if left_sum == right_sum or abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_idx = i
    return [nums[:split_idx]], [nums[split_idx:]]