def smallest_change(arr):
    arr = arr[::-1]
    diff_count = 0
    for i in range(len(arr)):
        if arr[i] != arr[len(arr) - i - 1]:
            diff_count += 1
    return diff_count