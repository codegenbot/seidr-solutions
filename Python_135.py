```
def can_arrange(arr):
    for i in range(1, len(arr)):
        if arr[i-1] <= arr[i]:
            return i-1
    return -1