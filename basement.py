def basement(nums):
    total = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            continue
    for i in range(len(nums) - 1, -1, -1):
        total -= nums[i]
        if total < 0:
            return i + 1
    return None