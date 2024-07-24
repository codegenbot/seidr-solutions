```python
def double_the_difference(lst):
    if len(lst) < 2:
        return "List should have at least two elements"
    min_val = min(lst)
    max_val = max(lst)
    return (max_val - min_val) * 2

lst = [1, 3, 5]
print(double_the_difference(lst))