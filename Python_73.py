```
def smallest_change(arr):
    n = len(arr)
    arr = [str(x) for x in arr]
    arr = ''.join(arr)
    left, right = 0, n - 1
    changes = 0
    while left < right:
        if arr[left] != arr[right]:
            changes += 1
            min_diff = float('inf')
            for i in range(n):
                if arr[i] == arr[right]:
                    min_diff = min(min_diff, abs(i - left))
            left += min_diff
        else:
            left += 1
        right -= 1
    return changes