```python
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, str):
            raise ValueError("The list must contain only integers.")
        else:
            total += int(num)**2
    return total


print(sum_squares([1, 2, 3]))