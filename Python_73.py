```
def smallest_change(arr):
    n = len(arr)
    forward = arr[:]
    backward = arr[::-1]
    
    for i in range(n // 2):
        if forward[i] != backward[n - i - 1]:
            return n - i - 1
    return 0