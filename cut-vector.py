def cut_vector(nums):
    min_diff = float("inf")
    cut_index = -1
    for i in range(1, len(nums)):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    return nums[:cut_index], nums[cut_index:]