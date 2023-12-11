```python
def leaders(arr):
    result = []
    current_leader = arr[-1]
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= current_leader:
            result.append(current_leader)
            current_leader = arr[i]
    
    # Add the last element as a leader if it is not already present in the result list
    if len(result) == 0 or result[-1] != current_leader:
        result.append(current_leader)

    return result
```