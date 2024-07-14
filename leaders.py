def leaders(arr):
    result = []
    for i in range(len(arr)-1, -1, -1):
        result.append(arr[i])
        max_right = arr[i]
    return result