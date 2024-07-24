"""Write a Python function sum_squares(lst) that takes a list of integers as input and returns the sum of squares of all numbers in the list."""


def sum_squares(lst):
    return sum([n**2 for n in lst])


result = sum_squares([1, 2, 3, 11, 12])
print(result)