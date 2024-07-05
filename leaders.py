def leaders(arr):
    result = []
    for i in range(len(arr)):
        if arr[i] >= max(arr[i + 1 :]):
            result.append(arr[i])
        elif arr[i] == max(arr[i + 1 :]) and not result or result[-1] != arr[i]:
            result.append(arr[i])
    return result