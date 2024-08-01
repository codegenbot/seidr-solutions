```
def smallest_change(arr):
    n = len(arr)
    count = 0
    for i in range(n):
        pos = i
        while arr[pos] != pos + 1:
            temp = arr[pos]
            arr[pos] = arr[temp-1]
            count += 1
    return count