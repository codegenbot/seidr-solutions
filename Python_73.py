```
def smallest_change(arr):
    arr.sort()
    forward = arr[:]
    backward = arr[::-1]
    changes = float('inf')
    
    for i in range(len(arr)):
        forward[i] = backward[-i-1]
        changes = min(changes, sum(1 for a, b in zip(forward, arr) if a != b))
    
    return changes