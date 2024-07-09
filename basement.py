```
def basement(nums):
    total_sum = 0
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            continue
        if total_sum > 0:
            break
    return i + 1 if total_sum < 0 else -1