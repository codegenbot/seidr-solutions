```
def leaders(arr):
    result = [arr[-1]]
    max_r = arr[-1]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_r:
            result.insert(0, arr[i])
            max_r = arr[i]
    return result