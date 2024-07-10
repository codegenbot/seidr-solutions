def basement(nums):
    prev_total = 0
    i = 0
    while True:
        prev_total += nums[i]
        if prev_total < 0:
            return i + 1
        i += 1