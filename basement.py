def basement(arr):
    total = 0
    for i in range(len(arr)):
        sum = 0
        sum += arr[i]
        if sum < 0:
            return i + 1
    return -1