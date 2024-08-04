def cut_vector(nums):
    min_diff = float("inf")
    split_index = -1

    for i in range(len(nums) - 1):
        diff = abs(np.mean(nums[: i + 1]) - np.mean(nums[i + 1 :]))

        if diff < min_diff:
            min_diff = diff
            split_index = i

    return nums[: split_index + 1], nums[split_index + 1 :]