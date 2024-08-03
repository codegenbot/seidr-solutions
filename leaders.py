def leaders(arr):
    result = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= arr[-1]:
            result.append(arr[i])
            arr.pop()
        else:
            break
    return reversed(result)