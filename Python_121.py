"""
Given a list of integers, find and return the sum of all odd numbers at even indices.
Example: If the input is [1, 2, 3, 4, 5, 6], the output should be 9 (3 + 5).
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)