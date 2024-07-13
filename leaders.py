def leaders(arr):
    n = len(arr)
    leaders = [max(arr)]
    
    for i in range(n - 2, -1, -1):
        if arr[i] >= max(arr[:i+1]):
            leaders.append(arr[i])
            
    return leaders[::-1]