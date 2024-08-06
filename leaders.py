```
def leaders(arr):
    n = len(arr)
    leader_vector = [arr[n-1]]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= arr[i+1]:
            leader_vector.insert(0, arr[i])
            
    return leader_vector