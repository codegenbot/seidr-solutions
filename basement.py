```
def basement(nums):
    first_negative_index = None
    running_sum = 0
    for i, num in enumerate(nums):
        running_sum += num
        if running_sum < 0:
            return i + 1
        first_negative_index = i + 1
    return first_negative_index