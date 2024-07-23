def basement(arr):
    total = 0
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            return i + 1
        elif total >= 0:
            break
    return -1