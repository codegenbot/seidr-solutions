def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            return i + 1
        elif total == 0:
            break 
    return None if total >= 0 else len(nums)