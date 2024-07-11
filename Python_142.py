```python
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int):
            total += num ** 2
    return total