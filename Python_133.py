```
def sum_squares(lst):
    return round(sum(math.ceil(x) ** 2 for x in lst))