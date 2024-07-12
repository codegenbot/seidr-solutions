def basement(arr):
    total = 0
    for i in range(len(arr)):
        total = arr[i]
        for j in range(i+1):
            total += arr[j]
        if total < 0:
            return i + 1
    return -1