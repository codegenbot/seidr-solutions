def can_arrange(arr):
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            return i
    return -1