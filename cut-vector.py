def cut_vector(nums):
    n = len(nums)
    min_diff = float("inf")
    cut_index = -1

    for i in range(n - 1):
        diff = abs(sum(nums[: i + 1]) - sum(nums[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return nums[:cut_index], nums[cut_index:]