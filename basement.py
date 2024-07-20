def find_first_negative_index(nums):
    total_sum = 0
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            return i
        elif total_sum == 0 and i > 0:
            total_sum = 0
    return len(nums)