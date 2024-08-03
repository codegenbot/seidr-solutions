def smallest_change(arr):
    n = len(arr)
    left = right = 0
    count = 0
    while left < n and right < n:
        if arr[left] != arr[n - right - 1]:
            right += 1
        else:
            left += 1
            right += 1
    return n - (right + left)