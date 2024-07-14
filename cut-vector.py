def cut_vector(nums):
    min_diff = float("inf")
    cut_index = 0
    for i in range(1, len(nums)):
        diff = abs(np.mean(nums[:i]) - np.mean(nums[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    return nums[:cut_index], nums[cut_index:]