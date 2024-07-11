def smallest_change(arr):
    arr.sort()
    min_diff = float('inf')
    for i in range(len(arr) - 1):
        diff = (arr[i+1] - arr[i])
        if diff < min_diff:
            min_diff = diff
    return min_diff