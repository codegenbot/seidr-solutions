def find_first_negative_index(nums):
    total_sum = nums[0]
    i = 0
    for num in nums[1:]:
        total_sum += num
        if total_sum < 0:
            return i + 1
    return -1