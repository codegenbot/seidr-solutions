```
def leaders(arr):
    n = len(arr)
    leaders = []
    
    for i in range(n):
        if i == n-1 or arr[i] >= max(arr[i+1:]):
            leaders.append(arr[i])
            
    return leaders