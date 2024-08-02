"""
Your code should solve a programming problem. Please read the problem description and write your solution here.

Given a list of integers, find the sum of all odd numbers in the list that are not the first element.
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)