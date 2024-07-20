def find_first_negative_index(nums):
    total_sum = sum(nums[:1])
    for i in range(1, len(nums)):
        if total_sum <= 0:
            return i
        total_sum += nums[i]
    return -1