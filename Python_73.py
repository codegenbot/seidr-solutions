```
def smallest_change(arr):
    n = len(arr)
    front_half = arr[:n//2]
    back_half = arr[n//2:][::-1]
    
    changes = 0
    for i in range(n//2):
        if front_half[i] != back_half[i]:
            changes += 1
    
    return changes