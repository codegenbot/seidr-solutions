def find_first_negative_index(nums):
    total_sum = sum(nums[:1])
    for i in range(1, len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            return i
    return -1