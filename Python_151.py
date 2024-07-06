"""
Check if the difference between each number and the smallest number in the list is equal to the sum of all odd numbers in the list.
"""


def check(lst):
    if double_the_difference(lst) == sum(x for x in lst if x % 2 != 0):
        print("True")
    else:
        print("False")


def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]


check([1, 3, 5])