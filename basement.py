def basement(nums):
    running_total = 0
    basement_index = None
    for i, num in enumerate(nums):
        running_total += num
        if running_total <= 0:
            basement_index = i + 1
            break
    return basement_index