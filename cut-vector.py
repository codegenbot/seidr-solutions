def cut_vector(nums):
    min_diff = float("inf")
    split_index = 0
    left_sum = sum(nums[:1])

    for i in range(1, len(nums)):
        right_sum = sum(nums[i:])

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

        left_sum += nums[i]

    return nums[: split_index + 1], nums[split_index:]