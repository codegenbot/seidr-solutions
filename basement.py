def basement(nums):
    total_sum = 0
    i = 0
    while True:
        if total_sum <= 0: 
            total_sum += nums[i]
        else:
            return i + 1
        i += 1