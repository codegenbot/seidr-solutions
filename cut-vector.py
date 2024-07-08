```
def cut_vector(nums):
    total_sum = sum(nums)
    min_diff = float("inf")
    split_index = 0
    for i in range(len(nums)):
        right_sum = total_sum - sum(nums[:i+1])
        diff = abs(sum(nums[:i+1]) - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i + 1
    return nums[:split_index], nums[split_index:]