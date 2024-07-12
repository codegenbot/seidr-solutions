```
def smallest_change(arr):
    n = len(arr)
    arr += arr[:-1][::-1]
    return sum(1 for a, b in zip(arr, arr[n//2:]) if a != b)