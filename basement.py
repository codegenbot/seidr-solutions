def basement(nums):
    total_sum = 0
    first_negative_index = float('inf')
    for i, num in enumerate(nums):
        total_sum += num
        if total_sum < 0:
            first_negative_index = i
    return first_negative_index if first_negative_index != float('inf') else -1