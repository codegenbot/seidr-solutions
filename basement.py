def basement(arr):
    total = 0
    i = 1
    while True:
        total += arr[i-1]
        if total < 0:
            return i + 1
        i += 1