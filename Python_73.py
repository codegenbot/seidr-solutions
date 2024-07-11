def smallest_change(arr):
    n = len(arr)
    left = 0
    right = n - 1
    changes = 0
    while left < right:
        if arr[left] != arr[right]:
            changes += min((right - left + 1), (n - 1) - right) + 1
            break
        left += 1
        right -= 1
    return changes