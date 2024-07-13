def leaders(arr):
    n = len(arr)
    leader = None
    leaders = []
    
    for i in range(n-1, -1, -1):
        if arr[i] >= leader:
            leader = arr[i]
            leaders.append(leader)
    
    return leaders[::-1]