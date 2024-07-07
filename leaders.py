```
def leaders(arr):
    leaders = [arr[i] for i in range(len(arr)-1, -1, -1) if arr[i] >= max(arr[i+1:])]
    return leaders