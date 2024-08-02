"""
Given a list of integers, the function should calculate the sum of all odd numbers starting from the second element to the end of the list.
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)