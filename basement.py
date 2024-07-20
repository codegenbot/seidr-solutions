def find_first_negative_index(nums):
    total_sum = nums[0]
    for i, num in enumerate(nums[1:]):
        total_sum += num
        if total_sum < 0:
            return i + 1
    return -1