def leaders(arr):
    result = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= result[0]:
            result.insert(0, arr[i])
    return result