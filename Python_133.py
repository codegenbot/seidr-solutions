```
def sum_squares(lst):
    return round(sum(math.ceil(i) ** 2 for i in lst))