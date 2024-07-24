```python
def search(lst):
    return max((num for num in set(lst) if num > 0), default=-1)