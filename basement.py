def find_first_negative_index(nums):
    if nums[0] < 0:
        return 0
    total_sum = nums[0]
    for i in range(1, len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            return i
    return -1