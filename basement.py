```
def basement(vector):
    running_sum = 0
    for i, x in enumerate(vector):
        running_sum += x
        if running_sum < 0:
            return i + 1
    return -1