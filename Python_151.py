```
def double_the_difference(list):
    return sum(i**2 for i in list if isinstance(i, int) and i > 0)