"""
Given a list of integers, find the sum of all odd numbers from index 1 to end.
The function should be case-insensitive and ignore non-integer values.

Example:
Input: [1, 2, 'a', 3, 4]
Output: 6 (sum of odd numbers at indices 1, 3)

"""


def solution(lst):
    return sum(i for i in lst[1::2] if isinstance(i, int) and i % 2 != 0)