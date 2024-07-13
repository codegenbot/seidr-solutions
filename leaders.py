def leaders(arr):
    n = len(arr)
    max_right = arr[n-1]
    leaders = [max_right]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.insert(0, max_right)
    
    return leaders