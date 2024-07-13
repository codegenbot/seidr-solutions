def basement(nums):
    total_sum = 0
    first_negative_index = -1
    for i, num in enumerate(nums):
        total_sum += num
        if total_sum > 0:
            total_sum = 0
            first_negative_index = -1
        elif total_sum < 0 and first_negative_index == -1:
            first_negative_index = i + 1
    return first_negative_index