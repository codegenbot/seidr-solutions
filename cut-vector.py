def cut_vector(nums):
    n = len(nums)
    min_diff = float("inf")
    split_point = 0

    for i in range(1, n):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_point = i

    return nums[:split_point], nums[split_point:]