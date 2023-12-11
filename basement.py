def first_negative_index(arr):
    for i in range(len(arr)):
        if arr[i] < 0:
            return i
    return -1