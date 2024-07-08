def cut_vector(nums):
    if len(nums) <= 3:
        for i in range(1, len(nums)):
            left_sum = sum(nums[: i + 1])
            right_sum = sum(nums[i:])
            diff = abs(left_sum - right_sum)
            if diff < min_diff and (left_sum == right_sum or min_diff == diff):
                min_diff = diff
                split_index = i
        return nums[:split_index], nums[split_index:]

    n = len(nums)
    for i in range(1, n - 2):
        mid_sum = sum(nums[i : i + 3])
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i + 3 :])
        if abs(left_sum - mid_sum) < min_diff and (
            left_sum == mid_sum or min_diff == abs(left_sum - mid_sum)
        ):
            min_diff = abs(left_sum - mid_sum)
            split_index = i
    return nums[:split_index], nums[split_index:]