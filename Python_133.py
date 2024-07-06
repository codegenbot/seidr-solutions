def sum_squares(lst):
    return round(sum([i**2 for i in [round(x) if x % 1 > 0 else x for x in lst]]))