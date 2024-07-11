```python
def double_the_difference(list1, list2):
    return 2 * abs(max(list2) - min(list1))

print(double_the_difference([1, 3, 5], [8, 4, 7]))