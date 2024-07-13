def basement(nums):
    running_sum = 0
    first_negative = False
    basement_index = -1
    for i, num in enumerate(nums):
        running_sum += num
        if running_sum < 0 and not first_negative:
            first_negative = True
            basement_index = i + 1
    return basement_index if first_negative else -1