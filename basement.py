def basement(arr):
    total = 0
    i = -1
    while True:
        i += 1
        total += arr[i]
        if total < 0:
            return i + 1
        if i == len(arr) - 1:
            return -1