```
def cut_vector(nums):
    min_diff = float("inf")
    split_index = 0
    left_sum = sum(nums[:1])
    right_sum = sum(nums[1:])
    for i in range(1, len(nums)-1):
        diff = abs(left_sum - (right_sum + nums[i]))
        if diff < min_diff and ((left_sum == right_sum) or diff == min_diff):
            min_diff = diff
            split_index = i+1
        left_sum += nums[i]
        right_sum -= nums[i]
    return nums[:split_index], nums[split_index:]