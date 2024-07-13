def leaders(arr):
    max_seen = arr[-1]
    leaders = [max_seen]

    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_seen:
            max_seen = arr[i]
            leaders.insert(0, max_seen)

    return leaders