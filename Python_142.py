```
def sum_squares(lst):
    return sum(i ** len(str(i)) for i in lst)