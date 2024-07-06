```
def smallest_change(arr):
    arr.sort()
    changes = 0
    for i in range(len(arr) - 1):
        if arr[i] == arr[i + 1]:
            continue
        while len(set(arr[i:i+2])) < 2:
            changes += 1
            arr[i], arr[i+1] = arr[i+1], arr[i]
    return changes