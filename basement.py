def basement(nums):
    total = 0
    prev_sum = float('inf')
    for i in range(len(nums)):
        total += nums[i]
        if total < 0 and total > prev_sum:
            return i
        prev_sum = total
    return -1