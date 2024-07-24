```Python
def sum_squares(lst):
    return sum(i**2 if i % 4 == 0 or i % 3 == 0 else i for i in lst)