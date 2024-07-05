def basement(arr):
    total = 0
    index = -1
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            index = i; break
    return index if index != -1 else -1