def cut_vector(nums):
    if len(nums) == 1:
        return nums[0], []

    min_diff = float("inf")
    split_index = -1

    for i in range(1, len(nums)):
        diff = abs(sum(nums[:i]) - sum(nums[i:]))
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return nums[:split_index], nums[split_index:]