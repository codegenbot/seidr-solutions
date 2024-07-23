```
def leaders(arr):
    max_right = arr[-1]
    result = [max_right]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right:
            result.append(arr[i])
            max_right = arr[i]
    return list(reversed(result))