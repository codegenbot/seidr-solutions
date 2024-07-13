```python
def leaders(arr):
    arr = arr[::-1]
    return [arr[i] for i in range(len(arr)) if all(x <= arr[i] for x in arr[:i])]