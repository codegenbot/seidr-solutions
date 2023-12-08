
```
def get_negative_sum_index(arr):
    curr_sum = 0
    for i in range(len(arr)):
        if arr[i] < 0:
            return i
        curr_sum += arr[i]
    return -1
```