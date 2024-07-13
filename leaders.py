def leaders(arr):
    n = len(arr)
    leaders = [arr[n-1]]
    
    for i in range(n-2, -1, -1):
        max_right = max(arr[i+1:])
        if arr[i] >= max_right:
            leaders.append(arr[i])
    
    return list(reversed(leaders))