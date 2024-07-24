def cut_vector(nums):
    total_sum = sum(nums)
    left_sum = 0

    for i in range(len(nums)):
        right_sum = total_sum - left_sum

        if abs(left_sum - right_sum) <= min(left_sum, right_sum):
            return (nums[: i + 1], nums[i:])

    return (nums, [])