```
def smallest_change(arr):
    n = len(arr)
    forward = [0] * n
    backward = [0] * n
    
    for i in range(n):
        forward[i] = arr[n-i-1]
        backward[i] = arr[i]
    
    changes = 0
    for i in range(n):
        if forward[i] != backward[i]:
            changes += 1
    
    return changes