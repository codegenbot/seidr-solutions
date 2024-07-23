def basement(nums):
    total = 0
    i = 0
    while True:
        total += nums[i]
        if total < 0:
            continue
        if total == 0:
            i += 1
        else:
            return i + 1