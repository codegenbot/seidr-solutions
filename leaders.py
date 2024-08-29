def leaders(arr):
    result = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            result.append(arr[i])
    return reversed(result)