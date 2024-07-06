```
def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]

check(double_the_difference)