def smallest_change(arr):
    n = len(arr)
    left = right = 0
    changes = 0

    while left < n // 2:
        if arr[left] != arr[n - 1 - left]:
            changes += 1
            while left < n // 2 and arr[left] != arr[n - 1 - left]:
                left += 1
        else:
            left += 1

    return changes


arr = [1, 0, 1, 0, 1]
print(smallest_change(arr))