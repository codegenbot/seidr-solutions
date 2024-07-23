```
def smallest_change(arr):
    n = len(arr)
    forward = [arr[i] for i in range(n//2)]
    backward = [arr[n-i-1] for i in range((n+1)//2)]
    
    changes = 0
    for i in range(len(forward)):
        if forward[i] != backward[-i-1]:
            changes += 1
    
    return changes