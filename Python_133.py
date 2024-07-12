def sum_squares(lst):
    return sum([(int(x) + 1) ** 2 if int(x) >= 0 else (int(x) - 1) ** 2 for x in lst])