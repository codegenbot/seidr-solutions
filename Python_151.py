```
def double_the_difference(lst):
    # implementation for double_the_difference function goes here
    if len(lst) < 2:
        return None
    first = lst[0]
    second = lst[-1]
    diff = abs(first - second)
    return diff * 2

def check(lst):
    result = double_the_difference(lst)
    return result