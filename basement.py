def basement(nums):
    total = 0
    i = 0
    while True:
        total += nums[i]
        if total < 0:
            return i + 1
        elif total > 0 and total - nums[i] < 0:
            return i + 1
        i += 1