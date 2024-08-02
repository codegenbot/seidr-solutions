"""
Your code should solve a programming problem. Please read the problem description
and write your solution here.
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)