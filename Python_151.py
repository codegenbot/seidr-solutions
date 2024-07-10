```
def double_the_difference(lst):
    if len(lst) < 2:
        return None
    lst.sort()
    diff = (lst[-1] - lst[0]) / 2
    count = sum(1 for x in lst if isinstance(x, int) and x % 2 == 0)
    return abs(diff * 2 - count)