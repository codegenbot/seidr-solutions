```
def leaders(arr):
    leaders = [arr[-1]]
    right = len(arr) - 1
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= arr[right]:
            leaders.insert(0, arr[i])
            right = i
    return leaders