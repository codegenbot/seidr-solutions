def basement(nums):
    total = 0
    i = 0
    while True:
        if total < 0:
            return i + 1
        total += nums[i]
        i += 1