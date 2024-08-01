```
def cut_vector(nums):
    min_diff = float('inf')
    split_index = -1
    for i in range(1, len(nums)):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])
        if left_sum == right_sum:
            return [nums[:i], nums[i:]]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return [nums[:split_index], nums[split_index:]]