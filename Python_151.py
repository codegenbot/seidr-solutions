```
def double_the_difference(lst):
    return sum(map(lambda x: x ** 2, filter(lambda x: isinstance(x, int) and x > 0, lst)))