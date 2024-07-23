def leaders(arr):
    leader = [arr[-1]]
    
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= leader[0]:
            leader.insert(0, arr[i])
            
    return leader