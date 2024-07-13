def basement(nums):
    previous_sum = 0
    for i, num in enumerate(nums):
        previous_sum += num
        if previous_sum < 0:
            return i + 1
    return len(nums) + 1