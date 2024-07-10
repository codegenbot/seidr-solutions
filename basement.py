```python
def basement(vector):
    total = 0
    for i, num in enumerate(vector):
        if total <= 0: 
            total = 0
        total += num
        if total < 0:
            return i + 1
    return -1