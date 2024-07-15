Here is the modified code:

```python
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) and (num % 3 == 0 or num % 4 == 0):
            total += num ** 2
        elif isinstance(num, float) and ((num - int(num)) % 0.1 < 0.05 and (int(num) % 3 == 0 or int(num) % 4 == 0)):
            total += num ** 2
    return total