def basement(nums):
    total_sum = 0
    i = 0
    while True:
        total_sum += nums[i]
        if total_sum < 0: 
            return i + 1
        elif total_sum > 0:
            total_sum = 0
        i += 1