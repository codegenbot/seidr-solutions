def sum_squares(lst):
    return sum([num ** len(str(num)) for num in lst])