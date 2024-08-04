def cut_vector(nums):
    total_sum = sum(nums)
    left_sum = 0
    for i, num in enumerate(nums):
        right_sum = total_sum - left_sum
        if left_sum == right_sum:
            return (nums[:i], nums[i:])
        left_sum += num
        right_sum -= num

    diff = float("inf")
    split_idx = None
    for i, num in enumerate(nums[:-1]):
        left_sum = sum(nums[: i + 1])
        right_sum = total_sum - left_sum
        if abs(left_sum - right_sum) < diff:
            diff = abs(left_sum - right_sum)
            split_idx = i

    return (nums[:split_idx], nums[split_idx:])