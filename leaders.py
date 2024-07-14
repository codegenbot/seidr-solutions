def leaders(arr):
    n = len(arr)
    result = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            result.append(arr[i])

    return result[::-1]