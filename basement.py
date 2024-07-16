def basement(nums):
    cum_sum = 0
    i = 0
    while i < len(nums): 
        cum_sum += nums[i]
        if cum_sum < 0:  # Found a negative sum!
            return i
        i += 1