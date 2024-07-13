def basement(nums):
    total = nums[0]
    i = 1
    while True:
        if total < 0:
            return i
        total += nums[i]
        i += 1