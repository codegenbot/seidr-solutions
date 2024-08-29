def cut_vector(nums):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(nums)):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])

        if left_sum == right_sum:
            return nums[:i], nums[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return nums[:split_index], nums[split_index:]