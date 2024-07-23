```
def smallest_change(arr):
    n = len(arr)
    forward = arr[:]
    backward = arr[::-1]
    changes = float('inf')
    
    for i in range(n):
        forward[i] = backward[n-i-1]
        changes = min(changes, sum(a != b for a, b in zip(forward, arr)))
    
    return changes