```
def array_change(arr):
    arr = list(map(int, ' '.join(map(str, arr)).split()))
    arr.sort()
    
    if len(set(arr)) > 1: 
        return -1
    
    changes = 0
    for i in range(1, len(arr)):
        while arr[i] != arr[0]:
            arr[i], arr[0] = arr[0], arr[i]
            changes += 1
            
    return changes