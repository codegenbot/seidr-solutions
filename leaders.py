```
def leaders(arr):
    n = len(arr)
    leader = []
    max_right = arr[n-1]
    for i in range(n-1, -1, -1):
        if arr[i] >= max_right:
            leader.append(arr[i])
            max_right = arr[i]
    return leader