```
def check(lst):
    if double_the_difference(lst) == sum(i for i in lst if isinstance(i, int) and i >= 0):
        return True
    else:
        return False