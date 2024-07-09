def basement(nums):
    running_total = 0
    for i, num in enumerate(nums):
        running_total += num
        if running_total < 0 and running_total > -abs(running_total):
            return i+1