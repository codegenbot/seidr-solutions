def leaders(arr):
    n = len(arr)
    result = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[n - 1]:
            result.append(arr[i])
            n = i
            break

    return reversed(result)