```
def basement(nums):
    total = start_index = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            start_index = i + 1
        elif total == 0:
            start_index = -1
    return start_index