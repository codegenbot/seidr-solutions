```python
def leaders(arr):
    leader = [arr[i] for i in range(len(arr)-1, -1, -1)]
    return leader