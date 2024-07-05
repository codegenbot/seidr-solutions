def basement(arr):
    total = 0
    index = -1
    for i in range(len(arr)):
        total += arr[i]
        if total < 0 and index == -1:
            index = i
    return index if index != -1 else -1