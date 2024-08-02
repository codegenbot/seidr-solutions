```
def sum_squares(lst):
    return sum((i**2 if (i % 3 == 0 and i % 4 != 0) else i**(i+1) or i for i in lst))