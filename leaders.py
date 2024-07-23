def leaders(arr):
    result = []
    max_right = arr[-1]
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_right:
            while i < len(arr) - 1 and arr[i] >= arr[i + 1]:
                i -= 1
            result.append(arr[i])
            max_right = arr[i]
    return result