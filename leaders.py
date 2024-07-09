Here's the modified code:
```python
def leaders(arr):
    n = len(arr)
    leader_arr = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= min(arr[i + 1:]):
            leader_arr.insert(0, arr[i])

    return leader_arr