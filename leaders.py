```
def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]
    for i in range(n - 2, -1, -1):
        if arr[i] >= leaders[-1]:
            leaders.insert(0, arr[i])
        elif leaders and leaders[-1] < arr[i]:
            leaders.pop()
    return leaders