"""
Your code should solve a programming problem. Please read the problem description and write your solution here.

The function should take a list of integers as an input, skip every other number in the list starting from the second element (index 1), sum up all the remaining numbers that are not divisible by 2, and return this sum.
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)