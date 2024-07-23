def basement(nums):
    left = total = 0
    for i, num in enumerate(nums, start=1):
        if total < 0:  
            return i
        total += num
    return -1