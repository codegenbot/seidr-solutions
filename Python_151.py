```python
def double_the_difference(lst):
    return sum(i**2 for i in [x for x in lst if isinstance(x, int) and x >= 0])

lst = [1, -2, 3, 4, 5]
print(double_the_difference(lst))