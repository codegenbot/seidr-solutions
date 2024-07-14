def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]
    
    for i in range(n-2, -1, -1):
        leaders.insert(0, max(leaders) if arr[i] < max(leaders) else arr[i])
    
    return leaders