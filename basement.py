```python
def basement(lst):
    current_sum = 0
    for i in range(len(lst)):
        current_sum += lst[i]
        if current_sum < 0:
            return i + 1
    return -1