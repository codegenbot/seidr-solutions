if len(nums) < 2:
    cut_index = None
else:
    total_sum = sum(nums)
    curr_sum = 0
    cut_index = None
    min_diff = float('inf')

    for i in range(len(nums) - 1):
        curr_sum += nums[i]
        diff = abs(curr_sum - (total_sum - curr_sum))
        if diff < min_diff:
            min_diff = diff
            cut_index = i

cut_index