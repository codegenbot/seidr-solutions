```
def leaders(arr):
    result = [arr[-1]]
    for i in range(len(arr) - 1, 0, -1):
        if arr[i] >= arr[i + 1]:
            result.insert(0, arr[i])
    return result