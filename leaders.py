def leaders(arr):
    n = len(arr)
    result = []

    max_right = arr[n - 1]
    result.append(max_right)

    for i in range(n - 2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            result.insert(0, max_right)

    return result