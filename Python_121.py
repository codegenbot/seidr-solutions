def sum_of_odd_numbers(lst):
    return sum(i for i in lst if isinstance(i, int) and i % 2 != 0)