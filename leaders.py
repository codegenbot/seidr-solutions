def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]
    
    for i in range(n-1, -1, -1):
        leaders.insert(0, arr[i])
    
    return leaders