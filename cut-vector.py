def cut_vector(nums):
    left = 0
    min_diff = float("inf")
    split_idx = -1

    for i in range(1, len(nums)):
        diff = abs(sum(nums[:i]) - sum(nums[i:]))

        if diff <= min_diff:
            min_diff = diff
            split_idx = i

    return nums[:split_idx], nums[split_idx:]