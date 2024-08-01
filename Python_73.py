```
def smallest_change(arr):
    n = len(arr)
    forward = [0] * n
    backward = [0] * n
    forward[0] = arr[0]
    for i in range(1, n):
        forward[i] = 1 if arr[i] != forward[i-1] else forward[i-1]
    backward[n-1] = arr[n-1]
    for i in range(n-2, -1, -1):
        backward[i] = 1 if arr[i] != backward[i+1] else backward[i+1]
    total_changes = sum(forward[1:])
    return total_changes + sum(backward[:-1])