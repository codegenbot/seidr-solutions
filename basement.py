def basement(nums):
    total_sum = 0
    first_negative_index = -1
    for i, num in enumerate(nums):
        total_sum += num
        if total_sum < 0:
            first_negative_index = i
        elif total_sum == 0 and first_negative_index == -1:
            pass
        else:
            return first_negative_index
    return first_negative_index