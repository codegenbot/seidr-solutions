def cut_vector(nums):
    min_diff = float("inf")
    cut_index = -1
    left_sum = 0

    for i in range(len(nums)):
        right_sum = sum(nums[i + 1 :])
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

        left_sum += nums[i]

    return [nums[: cut_index + 1], nums[cut_index + 1 :]]