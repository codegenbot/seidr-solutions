```Python
def smallest_change(arr):
    arr.sort()
    rev_arr = sorted(arr, reverse=True)
    changes = 0
    for i in range(len(arr)):
        if arr[i] != rev_arr[i]:
            changes += 1
    return changes