def basement(arr):
    total = arr[0]
    i = 1
    while True:
        if total < 0:
            return i
        total += arr[i]
        i += 1