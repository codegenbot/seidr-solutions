def basement(arr):
    total = 0
    found = False
    for i in range(len(arr)):
        total += arr[i]
        if total < 0 and not found:
            return i
        elif total >= 0:
            found = False
    return -1