```python
def basement(vector):
    for i, num in enumerate((n for n in vector)):
        total = sum(vector[:i+1])
        if total < 0:
            return i + 1
    return -1