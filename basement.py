def basement(arr):
    for i in range(len(arr)):
        total = 0
        for j in range(i+1):
            total += arr[j]
            if total < 0:
                return j
    return -1