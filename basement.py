def basement(nums):
    total = sum(nums)  # Calculate the total at the start
    for i in range(len(nums)):
        if total < 0:
            return i + 1
        total += nums[i]
    return -1