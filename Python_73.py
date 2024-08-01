```
def smallest_change(arr):
    n = len(arr)
    arr.sort()
    changes = 0
    i = 0
    while i < n:
        count = 1
        while i + 1 < n and arr[i] == arr[i+1]:
            i += 1
            count += 1
        if count > 1:
            changes += count - 1
        i += 1
    return changes