def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]
    for i in range(n - 2, -1, -1):
        leaders.insert(0, arr[i] if arr[i] >= leaders[0] else None)
    return [leader for leader in leaders if leader is not None]