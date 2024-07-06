def smallest_change(arr):
    arr = arr[::-1]
    return sum(1 for a, b in zip(arr, arr[1:]) if a != b) + (len(arr) % 2)