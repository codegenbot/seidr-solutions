```
def smallest_change(arr):
    left = right = 0
    changes = 0
    while left < len(arr) // 2:
        if arr[left] != arr[-right - 1]:
            changes += 1
        else:
            left += 1
            right -= 1
    return changes