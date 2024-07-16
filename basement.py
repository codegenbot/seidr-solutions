def basement(lst):
    running_sum = 0
    for i, num in enumerate(lst):
        running_sum += num
        if running_sum < 0:
            return i + 1
    return -1