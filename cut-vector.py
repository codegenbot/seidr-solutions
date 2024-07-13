def cut_vector(nums):
    if len(nums) == 1:
        return nums[0], []

    min_diff = float("inf")
    split_index = -1

    for i in range(1, len(nums)):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

    return nums[: split_index + 1], nums[split_index + 1 :]