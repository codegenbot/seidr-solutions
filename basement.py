def basement(nums):
    total = 0
    min_index = float('inf')
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            min_index = i
            break
    if min_index == float('inf'):
        return len(nums) + 1
    return min_index + 1