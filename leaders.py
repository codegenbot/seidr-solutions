```
def leaders(arr):
    leaders = []
    max_rgt = arr[-1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_rgt:
            leaders.append(arr[i])
            max_rgt = arr[i]
    return list(reversed(leaders))