def basement(nums):
    cum_sum = 0
    i = 0
    while True:
        cum_sum += nums[i]
        if cum_sum < 0:
            return i + 1
        i += 1
        if i >= len(nums) - 1:  
            return -1