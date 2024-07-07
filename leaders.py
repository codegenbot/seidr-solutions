```
def leaders(arr):
    max_right = max(arr)
    leader = [max_right]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_right:
            leader.insert(0, arr[i])
            max_right = arr[i]
    return leader