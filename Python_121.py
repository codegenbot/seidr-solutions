"""
Given a list of integers, write a function that returns the sum of all odd numbers in the list, excluding the first element.
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)