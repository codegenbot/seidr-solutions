def leaders(arr):
    n = len(arr)
    leader = [arr[n-1]]
    
    for i in range(n - 1, 0, -1):
        if arr[i-1] >= arr[i]:
            leader.append(arr[i-1])
    
    return leader[::-1]