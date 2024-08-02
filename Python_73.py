def smallest_change(arr):
    n = len(arr)
    count = 0
    for i in range(n // 2):
        if arr[i] != arr[n - 1 - i]:
            count += 1
    return count