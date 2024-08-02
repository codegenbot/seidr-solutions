"""
Given a list of integers, the function should calculate the sum of all odd numbers in the list, excluding the first element.

Example: If the input is [1, 2, 3, 4, 5], the output should be 9 (3 + 5).
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)