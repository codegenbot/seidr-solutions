```
def smallest_change(arr):
    n = len(arr)
    min_diff = float('inf')
    for i in range(n-1):
        diff = arr[i] - arr[i+1]
        if abs(diff) < abs(min_diff):
            min_diff = diff
    return abs(min_diff)