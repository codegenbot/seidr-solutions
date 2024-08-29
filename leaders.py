def leaders(arr):
    n = len(arr)
    result = [arr[-1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[-1]:
            result.append(arr[i])
            arr[-1] = arr[i]

    return reversed(result)