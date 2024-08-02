"""
Write a function that takes a list of integers as input and returns the sum of all odd numbers in the list.
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)