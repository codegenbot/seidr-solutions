def find_first_negative_index(nums):
    total_sum = sum(nums[:])
    for i in range(len(nums)):
        total_sum += -nums[i]
        if total_sum < 0:
            return i
    return len(nums) - 1