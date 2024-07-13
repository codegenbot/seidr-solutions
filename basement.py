```
def basement(nums):
    total_sum = 0
    sign = 1 if total_sum > 0 else -1
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum < 0 and sign == 1:
            return i + 1
        sign = -sign if total_sum < 0 else 1
    return -1