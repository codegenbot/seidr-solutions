```
def smallest_change(arr):
    n = len(arr)
    forward = arr[:]
    backward = arr[::-1]
    
    count = 0
    for i in range(n//2):
        if forward[i] != backward[n-i-1]:
            count += 1
    
    return count