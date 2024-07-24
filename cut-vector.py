def cut_vector(nums):
    left_sum = right_sum = 0
    min_diff = float("inf")
    split_idx = -1
    for i in range(len(nums)):
        if i % 2 == 0:
            left_sum += nums[i]
        else:
            right_sum += nums[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff or (diff == min_diff and split_idx != i):
            min_diff = diff
            split_idx = i
    return nums[: split_idx // 2 + 1], nums[split_idx // 2 + 1 :]