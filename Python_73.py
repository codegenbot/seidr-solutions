```
def smallest_change(arr):
    left = len(arr) // 2
    right = len(arr) - 1 - left
    changes = 0
    while left < right:
        if arr[left] != arr[right]:
            changes += 1
            for i in range(left + 1, right):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    break
            right -= 1
        else:
            left += 1
            right -= 1
    return changes