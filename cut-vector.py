def cut_vector(nums):
    min_diff = float("inf")
    split_index = -1
    for i in range(1, len(nums)):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])
        if i % 2 == 1:  
            diff = abs(left_sum - right_sum)
        else:  
            diff = abs(right_sum - left_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return nums[:split_index], nums[split_index:]