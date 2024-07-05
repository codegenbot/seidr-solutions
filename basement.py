def basement(arr):
    total = 0
    i = -1
    while True:
        i += 1
        total += arr[i]
        if total < sum(arr[:i+1]):
            return i + 1
        if i == len(arr) - 1:
            return -1