def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]
    
    max_right = arr[0]
    
    for i in range(n - 2, -1, -1):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
            
    return reversed(leaders)