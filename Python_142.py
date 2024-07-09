```python
def sum_squares(lst):
    total = 0
    for i in lst:
        if isinstance(i, int) and (i % 3 == 0 and i % 4 != 0):
            total += i ** 2
        elif isinstance(i, int) and (i % 4 == 0 and i % 3 != 0):
            total += i ** 3
    return total