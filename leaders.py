def leaders(arr):
    n = len(arr)
    result = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[-1]:
            result.append(arr[i])
            last_leader = i
        else:
            break

    return result[::-1]