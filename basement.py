def basement(nums):
    total = 0
    for i, num in enumerate(nums, 1): 
        total += num
        if total < 0:
            return i - 1  
    return -1