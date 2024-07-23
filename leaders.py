```
def leaders(arr):
    n = len(arr)
    max_seen = arr[0]
    leaders = [arr[0]]
    
    for i in range(1, n):
        if arr[i] >= max_seen:
            leaders.append(arr[i])
            max_seen = arr[i]
            
    return leaders