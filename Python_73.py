```
def smallest_change(arr):
    n = len(arr)
    left = right = res = 0
    while left < n // 2:
        if arr[left] != arr[n - 1 - right]:
            res += 2
            right += 1
        else:
            left += 1
            right += 1
    return min(res, n - 1 - left)