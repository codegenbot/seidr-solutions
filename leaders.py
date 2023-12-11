def leaders(arr):
    result = []
    for i in range(len(arr)):
        if arr[i] >= max(arr[i+1:] or []) and (i == 0 or arr[i-1] < arr[i]):
            result.append(arr[i])
    return result
