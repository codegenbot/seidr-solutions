def leaders(arr):
    result = []
    max_right = arr[-1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_right:
            result.append(max_right)
            max_right = arr[i]
    return result[::-1]