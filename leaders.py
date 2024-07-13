```
def leaders(arr):
    n = len(arr)
    leaders = []
    for i in range(n):
        leaders.append(arr[i]) if i == n - 1 or arr[i] >= max(arr[i+1:]) else None
    return leaders