Here is the completed code:

def leaders(arr):
    n = len(arr)
    last = arr[n-1]
    leaders = [last]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= last:
            leaders.append(arr[i])
            last = arr[i]
            
    return leaders[::-1]