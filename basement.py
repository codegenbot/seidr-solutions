def basement(nums):
    cum_sum = sum(nums[:1]) 
    for i, num in enumerate(nums[1:], 2): 
        if cum_sum < 0: 
            return i - 1
        cum_sum += num
    return -1