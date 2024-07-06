```
def sum_squares(lst):
    return sum([x**2 if i % 3 == 0 and i % 4 != 0 else x**3 for i, x in enumerate(lst)])