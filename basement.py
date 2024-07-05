def basement(arr):
    total = 0
    i = -1
    while True:
        i += 1
        total += arr[i]
        if total < 0:
            return i + 1
        elif total > 0:
            total = 0
            i = -1