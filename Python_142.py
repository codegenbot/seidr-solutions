def sum_of_odd_squares(lst):
    total_sum = sum([i**2 for i in lst if i % 2 != 0])
    return total_sum