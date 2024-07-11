```
def double_the_difference(lst):
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff

import builtins
def check(func):
    if len(builtins.input()) > 1:
        print("Error: Please enter single input.")
        return None
    else:
        return func()