def can_arrange(arr):
    arr.sort()
    for i in range(1, len(arr)):
        if arr[i - 1] > arr[i]:
            return i
    return -1