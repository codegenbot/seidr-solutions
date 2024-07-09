def sum_of_odd_numbers(lst):
    "Returns the sum of all odd numbers in a given list."
    return sum([i for i in lst if i % 2 != 0])