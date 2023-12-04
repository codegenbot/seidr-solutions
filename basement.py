```
def get_negative_sum_index(arr):
    sum = 0
    index = -1

    for i in range(len(arr)):
        sum += arr[i]
        if sum < 0:
            index = i
            break

    return index
```