```
def leaders(arr):
    max_r = arr[len(arr) - 1]
    leaders = [max_r]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_r:
            max_r = arr[i]
            leaders.append(max_r)
    return leaders[::-1]