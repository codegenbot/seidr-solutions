def leaders(arr):
    n = len(arr)
    max_seen = arr[n-1]
    leaders = [max_seen]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= max_seen:
            max_seen = arr[i]
            leaders.insert(0, max_seen)
        else:
            leaders.insert(0, max_seen)
    
    return leaders