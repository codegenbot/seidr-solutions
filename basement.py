def basement(nums):
    running_total = 0
    for i, num in enumerate(nums):
        running_total += num
        if running_total < 0:
            continue
        elif running_total == 0: 
            running_total = 0
        else:
            return i + 1