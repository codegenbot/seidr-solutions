```Python
def cut_vector(nums):
    min_diff = float("inf")
    split_index = 0
    for i in range(len(nums)):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i+1
    return nums[:split_index-1], nums[split_index-1:]