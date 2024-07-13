def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]
    for i in range(n - 2, -1, -1):
        if arr[i] < leaders[-1]:
            break
        leaders.append(arr[i])
    return leaders[::-1]