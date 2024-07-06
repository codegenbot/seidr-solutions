```
def double_the_difference(lst):
    return (lambda l: sum(i**2 for i in l if isinstance(i, int) and i >= 0 and i % 2 != 0))(lst)