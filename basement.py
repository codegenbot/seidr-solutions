def find_first_negative_index(nums):
    total_sum = 0
    for i in range(len(nums)):
        if total_sum < 0:
            return i
        total_sum += nums[i]
    return len(nums) - 1