def leaders(arr):
    max_seen = arr[-1]
    leaders = [max_seen]
    
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= max_seen:
            leaders.insert(0, arr[i])
            max_seen = arr[i]
            
    return leaders