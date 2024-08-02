"""
Given a list of integers, return the sum of all odd numbers starting from the second element and then every other number.
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)