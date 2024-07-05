def basement(arr):
    total = cumulative_sum = 0
    for i, x in enumerate(arr):
        cumulative_sum += x
        if cumulative_sum < 0:
            return i + 1
    return -1