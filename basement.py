def basement(nums):
    total = nums[0]  
    for i, num in enumerate(nums[1:], start=0):  
        if total < 0:
            return i
        total += num
    return None