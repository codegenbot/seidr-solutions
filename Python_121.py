"""
Given a list of integers, find the sum of all odd numbers that are at an odd index in the list.

Example:
    Input: [1, 2, 3, 4, 5]
    Output: 9 (because 3 and 5 are at odd indices and they are odd)

"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)