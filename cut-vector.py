def cut_vector(nums):
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(nums)):
        diff = abs(np.mean(nums[:i]) - np.mean(nums[i:]))
        if diff < min_diff:
            min_diff = diff
            split_idx = i

    return nums[:split_idx], nums[split_idx:]