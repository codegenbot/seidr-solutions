```
def basement(nums):
    total_sum = nums[0]
    for i in range(1, len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            return i
    return -1