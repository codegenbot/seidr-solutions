def sum_squares(lst):
    total = sum(num ** len(str(num)) for num in lst)
    return total % 2 == 0