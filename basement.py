def basement(arr):
    total_sum = sum(arr)
    if total_sum < 0:
        return 0
    for i in range(len(arr)):
        if sum(arr[:i+1]) < 0:
            return i + 1
    return -1