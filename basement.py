def basement(arr):
    total = 0
    for i in range(len(arr)):
        temp = 0
        temp += arr[i]
        if temp < 0:
            return i + 1
    return -1