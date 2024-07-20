def find_first_negative_index(nums):
    total_sum = sum(0 if x > 0 else x for x in nums)
    for i, x in enumerate(nums):
        total_sum += x
        if total_sum < 0:
            return i
    return len(nums) - 1