```
def double_the_difference(lst):
    lst = [int(i) for i in lst if isinstance(i, str) and i.isdigit() and int(i) > 0]
    return sum(i**2 for i in lst)