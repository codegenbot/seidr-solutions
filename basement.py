def basement(nums):
    total = 0
    for i, num in enumerate(nums, 1): 
        total += num
        if total < 0: return i
        elif total == 0: total = 0
    return -1