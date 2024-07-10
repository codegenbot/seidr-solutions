```
def basement(nums):
    prev_total = 0
    for i in range(len(nums)):
        total = prev_total + nums[i]
        if total < 0 and prev_total >= 0:
            return i + 1
        prev_total = total
    return -1