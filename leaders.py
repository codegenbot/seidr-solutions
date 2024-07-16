def leaders(arr):
    n = len(arr)
    leaders = []
    
    for i in range(n-1, -1, -1):
        if i == n-1 or arr[i] >= max(arr[i+1:]):
            leaders.append(arr[i])
            
    return leaders