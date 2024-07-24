def count_odd_numbers_in_uneven_indices(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)