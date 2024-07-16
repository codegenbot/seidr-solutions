```
def leaders(arr):
    leaders = []
    max_seen = arr[-1]
    leaders.append(max_seen)

    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_seen:
            leaders.insert(0, arr[i])
            max_seen = arr[i]

    return leaders