def basement(nums):
    total = sum(nums[:1])
    for i, num in enumerate(nums[1:], start=2):
        total += num
        if total < 0:
            return i
    return None