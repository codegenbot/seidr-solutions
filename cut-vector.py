def cut_vector(nums):
    min_diff = float("inf")
    split_index = 0
    left_sum = right_sum = sum(nums)

    for i in range(1, len(nums)):
        left_sum -= nums[i]
        right_sum += nums[i]

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return nums[: split_index + 1], nums[split_index:]