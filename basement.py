```python
def basement(input_list):
    total = 0
    for i, num in enumerate(input_list):
        total += num
        if total < 0:
            return i + 1
    return -1