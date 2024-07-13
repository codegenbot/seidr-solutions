def basement(nums):
    total_sum = 0
    i = 0
    while True:
        if total_sum + nums[i] <= 0: 
            return i + 1
        if i == len(nums) - 1: 
            break  
        total_sum += nums[i]
        i += 1