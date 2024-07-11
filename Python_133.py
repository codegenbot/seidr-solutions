```
def sum_squares(lst):
    return round(sum(map(lambda x: (int(x) + 0.5) ** 2, lst)))