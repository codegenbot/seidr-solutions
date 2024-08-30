def cut_vector(nums):
    left = right = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(1, len(nums)):
        diff = abs(sum(nums[:i]) - sum(nums[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    left_nums = nums[:cut_index]
    right_nums = nums[cut_index:]

    return (left_nums, right_nums)