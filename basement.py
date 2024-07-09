```
def basement(nums):
    running_total = 0
    for i, num in enumerate(nums):
        running_total += num
        if running_total < 0:
            continue
    return -1