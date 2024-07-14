def leaders(arr):
    result = []
    max_r = arr[-1]
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_r:
            result.append(arr[i])
            max_r = arr[i]
    return result