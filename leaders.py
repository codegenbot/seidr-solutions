```
def leaders(arr):
    leader = arr[-1]
    leaders = [leader]
    
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= leader:
            leaders.insert(0, arr[i])
            leader = arr[i]
            
    return leaders