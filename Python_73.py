def smallest_change(arr):
    min_diff = float("inf")
    for i in range(1, len(arr)):
        diff = abs(arr[i] - arr[i - 1])
        if diff < min_diff:
            min_diff = diff
    return min_diff