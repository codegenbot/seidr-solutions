
Here's the modified code with the typo fixed:
```
def get_negative_sum_index(arr):
    curr_sum = 0
    for i in range(len(arr)):
        curr_sum += arr[i]
        if curr_sum < 0:
            return i
    return -1
```