def sum_of_odd_numbers(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)