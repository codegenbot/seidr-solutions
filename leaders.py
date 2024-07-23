def leaders(arr):
    result = []
    for i in range(len(arr) - 1, -1, -1):
        if i == len(arr) - 1 or arr[i] >= arr[i + 1]:
            result.append(arr[i])
    return result