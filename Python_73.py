def smallest_change(arr):
    arr = arr + arr[:-1][::-1]
    return sum(1 for i in range(len(arr)) if arr[i] != arr[-i - 1])