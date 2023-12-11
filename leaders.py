```
def leaders(arr):
   # initialize the maximum value and the result list
    max_val = arr[0]
    result = []
    for i in range(1, len(arr)):
        if arr[i] >= max_val:
            # update the maximum value if the current element is greater than or equal to it
            max_val = arr[i]
            # add the current element to the result list
            result.append(max_val)
    return result
```