def basement(nums):
    total = nums[0]
    prev_sum = 0
    for i, num in enumerate(nums[1:], 1): 
        if total < 0:  
            return i
        total += num
        if total < 0:
            return i
    return -1