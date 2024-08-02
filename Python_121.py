"""
Given a list of integers, the function should return the sum of all odd numbers that are at an even index position in the list.
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)