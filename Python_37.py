"""
Given a list of integers, sort the even numbers first, then the odd numbers.
"""

from itertools import zip_longest

def sort_even(l: list):
    evens = sorted([i for i in l if i % 2 == 0])
    odds = sorted([i for i in l if i % 2 != 0])
    return list(zip_longest(evens, odds, fillvalue=0))