def smallest_change(arr):
    changes = 0
    for i in range(len(arr)//2):
        if arr[i] != arr[len(arr)-1-i]:
            changes += 1
    return changes