def sum_squares(lst):
    total_sum = sum(i**2 if i % 3 == 0 and i % 4 != 0 else i**3 for i in lst)
    return total_sum