```
def check(func):
    return func([1, 3, 5]) == 6 or func([4, 2, 10]) == 8

def double_the_difference(lst):
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff

check(double_the_difference())