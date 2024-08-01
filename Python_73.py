```
def smallest_change(arr):
    n = len(arr)
    forward = [arr[i] for i in range(n)]
    backward = [arr[n-i-1] for i in range(n)]
    
    count = 0
    for i in range(n):
        if forward[i] != backward[i]:
            count += 1
    
    return count