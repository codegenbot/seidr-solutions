def find_first_negative_index(nums):
    total_sum = 0
    for i in range(len(nums)):
        if nums[i] < 0:
            total_sum += nums[i]
            if total_sum < 0:
                return i
        else:
            total_sum = 0
    return len(nums) - 1