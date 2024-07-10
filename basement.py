def basement(nums):
    total = sum(nums[:1]) 
    if total < 0:
        return 0
    for i, num in enumerate(nums[1:], start=1): 
        total += num
        if total < 0:
            return i
    return -1