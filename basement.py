def find_first_negative_index(nums):
    total_sum = 0
    for i, num in enumerate(nums):
        if total_sum + num < 0:
            return i
        total_sum += num
    return len(nums) - 1