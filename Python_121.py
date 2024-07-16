```
"""
Given an array of integers, write a function that returns the sum of all odd numbers in the array.
The function should skip every other number starting from the second one.

Example:
Input: [1, 2, 3, 4, 5]
Output: 9 (1 + 3 + 5)
"""

def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)