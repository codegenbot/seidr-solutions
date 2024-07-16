def leaders(arr):
    leaders = [arr[-1]]
    max_seen = arr[-1]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_seen:
            leaders.insert(0, arr[i])
            max_seen = arr[i]
    return leaders