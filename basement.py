def basement(nums):
    running_sum = 0
    min_index = -1
    for i, num in enumerate(nums):
        running_sum += num
        if running_sum < 0:
            if min_index == -1: 
                min_index = i
    return min_index + 1