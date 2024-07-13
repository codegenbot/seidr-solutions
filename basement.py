def basement(nums):
    total = sum(nums[:1])  
    for i, num in enumerate(nums[1:], start=1):  
        if total < 0:
            return i
        total += num
    return None