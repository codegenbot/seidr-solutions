```Python
def leaders(arr):
    max_right = arr[-1]
    result = [max_right]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            result.insert(0, max_right)
    return result