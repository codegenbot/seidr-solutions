def cut_vector(nums):
    min_diff = float("inf")
    split_index = -1
    for i in range(1, len(nums)):
        diff = abs(np.mean(nums[:i]) - np.mean(nums[i:]))
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return nums[: split_index + 1], nums[split_index + 1 :]