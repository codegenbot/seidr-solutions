```
def double_the_difference(lst):
    lst.sort()
    return (lst[-1] - lst[0]) * 2

def check(lst):
    return double_the_difference(lst)