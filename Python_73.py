def smallest_change(arr):
    arr = [int(i) for i in arr]
    arr.sort()
    changes = sum(abs(a - b) for a, b in zip([0] + arr, arr))
    return changes