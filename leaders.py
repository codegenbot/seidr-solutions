```
def leaders(arr):
    leaders = []
    max_right = arr[-1]
    
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_right:
            leaders.append(max_right)
            max_right = arr[i]

    return [max_right] + leaders[::-1]