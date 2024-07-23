def leaders(arr):
    n = len(arr)
    max_seen = arr[n-1]
    leaders = [arr[n-1]]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= max_seen:
            leaders.append(arr[i])
            max_seen = arr[i]
            
    return leaders