"""
Your code should solve a programming problem. Please read the problem description and write your solution here.

The task is to create a function that takes a list of integers as input and returns the sum of all odd numbers in the list, excluding the first element.
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)