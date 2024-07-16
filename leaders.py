```
def leaders(arr):
    leaders = []
    max_seen = arr[-1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_seen:
            leaders.append(arr[i])
            max_seen = arr[i]
    return leaders[::-1]