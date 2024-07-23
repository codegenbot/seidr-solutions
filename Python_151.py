```
def double_the_difference(lst):
    difference = sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2 - (sum(i for i in lst if i % 2 != 0) - 1) * 2
    return difference