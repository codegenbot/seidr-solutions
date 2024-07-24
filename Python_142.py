def sum_of_odd_squares(lst):
    return sum(i**2 for i in lst if i % 2 != 0)