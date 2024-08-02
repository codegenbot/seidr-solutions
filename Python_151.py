```
def double_the_difference(list_of_ints):
    return sum(i**2 for i in (x for x in list_of_ints if isinstance(x, int) and x >= 0))