def get_negative_sum_index(arr):
    if any(x < 0 for x in arr):
        raise ValueError("All elements must be non-negative")
    curr_sum = 0
    for i in range(len(arr)):
        curr_sum += arr[i]
        if curr_sum < 0:
            return i - 1
    return -1