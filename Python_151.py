```
def double_the_difference(lst):
    lst.sort()
    if len(lst) < 2:
        return 0
    half = (len(lst)) // 2
    return ((lst[half])**2) - ((lst[0])**2)