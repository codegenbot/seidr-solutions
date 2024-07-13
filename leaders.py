def leaders(arr):
    n = len(arr)
    max_seen = arr[n - 1]
    leaders = [max_seen]
    for i in range(n-2, -1, -1):
        if arr[i] >= max_seen:
            while not (arr[i] >= leaders[-1]):
                leaders.pop()
            leaders.append(arr[i])
            max_seen = arr[i]
    return leaders[::-1]