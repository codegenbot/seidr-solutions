```python
def basement(nums):
    for i in range(1, len(nums)):
        if sum(nums[:i+1]) < 0:
            return i
    return -1