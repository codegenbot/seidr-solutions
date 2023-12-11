```python
def leaders(arr):
    result = []
    for i in range(len(arr)):
        if arr[i] >= max(arr[i+1:]) or (i == len(arr) - 1 and arr[i] > arr[i-1]):
            result.append(arr[i])
    return result
```