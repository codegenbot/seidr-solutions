```
def leaders(arr):
    n = len(arr)
    leaders = [max(arr[i:]) for i in range(n)]
    return leaders