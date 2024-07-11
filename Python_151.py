```
def double_the_difference(lst):
    total = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    print(4*total - sum(x*x for x in filter(lambda x: x>0, map(int, lst))))