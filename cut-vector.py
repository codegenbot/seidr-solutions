```
def cut_vector(nums):
    min_diff = float("inf")
    split_index = 0
    for i in range(len(nums) - 1):
        left_sum = sum(nums[:i+1])
        right_sum = sum(nums[i+1:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i + 1
    return nums[:split_index], nums[split_index:]