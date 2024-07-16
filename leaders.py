def leaders(arr):
    n = len(arr)
    maxRight = arr[n-1]
    leaders = [maxRight]
    
    for i in range(n - 2, -1, -1):
        if arr[i] >= maxRight:
            maxRight = arr[i]
            leaders.insert(0, maxRight)
            
    return leaders