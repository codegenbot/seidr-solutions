```
def sum_squares(lst):
    return sum(i**2 if isinstance(i, int) and i % 4 == 0 else i for i in lst)