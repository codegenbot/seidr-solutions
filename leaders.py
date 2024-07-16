def leaders(arr):
    n = len(arr)
    leaders = [max(arr[i+1:]) for i in range(n-1, -1, -1) if arr[i] >= max(arr[i+1:])]
    return leaders