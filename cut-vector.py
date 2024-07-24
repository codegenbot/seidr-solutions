def cut_vector(nums):
    min_diff = float("inf")
    cut_index = 0
    left_sum = 0

    for i in range(len(nums)):
        left_sum += nums[i]
        right_sum = sum(nums[i + 1 :])

        if left_sum == right_sum:
            return [nums[: i + 1], nums[i:]]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return [nums[: cut_index + 1], nums[cut_index + 1 :]]