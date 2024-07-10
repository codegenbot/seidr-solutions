```
def double_the_difference(lst):
    return sum(i ** 2 for i in [j for j in lst if isinstance(j, int) and j >= 0 and j % 2 != 0])